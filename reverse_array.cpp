#include <iostream>
using namespace std;

//reverse an array

void reverse_array(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY: ";
    cin>>n;
    
    int arr[n];
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    reverse_array(arr, n);

    cout<<"REVERSE ARRAY :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}