#include <iostream>
#include <vector>
using namespace std;

//insertion sorting
void insertion_sort(vector<int> & arr, int n ){
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
            arr[prev + 1] = current;
        }
        
    }
    
}
void print(vector<int> & arr, int n){
    cout<<"*** INSERTION SORTING ***"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{ 
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    print(arr, n);
    
    return 0;
}