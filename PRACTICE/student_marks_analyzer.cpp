#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void high_low_marks(vector<int> & arr){
    if (arr.empty())
    {
        cout<<"ENTER MARKS!"<<endl; return;
    }
    
    int high = INT_MIN, low = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < low)
        {
            low = arr[i];
        }
        if (arr[i] > high)
        {
            high = arr[i];
        }
        
    }

    cout<<"HIGHEST MARKS: "<<high<<endl;
    cout<<"LOWEST MARKS: "<<low<<endl;
}
double average(vector<int> & arr){
    int sum = 0;
    if (arr.empty())
    {
        cout<<"ENTER MARKS!";
        return 0;
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return (double) sum/arr.size();
}
int search(vector<int> & arr, int target){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target )
        {
            return i;
        }
    }
    return -1;
}
void sorting(vector<int> & arr){
    for (int i = 0; i < arr.size(); i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev--];
        }
        arr[prev + 1] = current;
    }
    
}
void display(vector<int> & arr){
    for(int x : arr)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
    vector<int> marks; int n, choice, target; 
    do
    {
    cout<<"==== MARKS SYSTEM ===="<<endl;
    cout<<"1. ENTER MARKS"<<endl;
    cout<<"2. DISPLAY MARKS"<<endl;
    cout<<"3. HIGHEST AND LOWEST MARKS"<<endl;
    cout<<"4. AVERAGE"<<endl;
    cout<<"5. SEARCH MARKS"<<endl;
    cout<<"6. SORTED MARKS"<<endl;
    cout<<"7. EXIT"<<endl;

    cout<<"ENTER CHOICE: ";
    cin>>choice;
    switch (choice)
    {
    case 1:{
        cout<<"ENTER NO. OF SUBJECTS: ";
        cin>>n;
        cout<<"ENTER "<<n<<" SUBJECTS MARKS: ";
        int m;
        for (int i = 0; i < n; i++)
        {
            cin>> m;
        marks.push_back(m);}
        cout<<"MARKS SUCCESSFULLY ADDED!"<<endl;
        break;
    }
    case 2:
        display(marks);
        break;

    case 3:
        high_low_marks(marks);    
        break;

    case 4:
        cout<<"AVERAGE: "<<average(marks)<<endl;
        break;
        
    case 5:{
        cout<<"ENTER TARGET: ";
        cin>>target;
        int index = search(marks, target); 
        if (index != -1)
        {
            cout<<target<<"FOUND AT "<<index+1<<endl;
        }
        else
        {
            cout<<"TARGET NOT FOUND!"<<endl;
        }
           
        break;
    } 
    case 6: 
        sorting(marks);
        cout<<"SORTED MARKS"<<endl;
        display(marks);
        break;

    case 7:
        cout<<"EXITING...";
        break;

    default: cout<<"INVALID OPTION!";    

    }
}
while (choice != 7);

    return 0;
}