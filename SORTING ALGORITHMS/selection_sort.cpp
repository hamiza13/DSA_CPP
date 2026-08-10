#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//selection sorting
void selection_sort(vector<int> & arr, int n){
    for (int i = 0; i < n - 1; i++)
    {
        int smallest_index = i;
        for (int j = i + 1 ; j < n; j++)
        {
            if (arr[j] < arr[smallest_index])
            {
                smallest_index = j;
            }
            
        }
           swap(arr[i], arr[smallest_index]);
    }
    
}
void print(vector<int> & arr,int n){
    cout<<"*** SELECTION SORTING ***"<<endl;
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
    cin>> n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr, n);
    print(arr, n);

    return 0;
}