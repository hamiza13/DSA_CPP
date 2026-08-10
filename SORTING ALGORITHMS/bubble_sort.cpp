#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//bubble sorting
void bubble_sort(vector<int> & arr, int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    
}
void print(vector<int> & arr, int n){
    cout<<"*** BUBBLE SORTING ***"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"*** BUBBLE SORTING ***"<<endl;
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>> n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    print(arr, n);

    return 0;
}