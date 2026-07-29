#include <iostream>
using namespace std;

// swap the max and min numbers of an array

void swap_max_min(int arr[], int size){

    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    int minindex = 0;
    int maxindex = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            minindex = i;
        } 
        if (arr[i] > largest)
        {
            largest = arr[i];
            maxindex = i;
        }
        
        
    }
    cout<<"SMALLEST: "<<smallest<<endl<<"LARGEST: "<<largest<<endl;

    swap(arr[minindex], arr[maxindex]);
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
    swap_max_min(arr, n)
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }

    return 0;
}