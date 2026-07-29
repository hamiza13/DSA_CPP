#include <iostream>
using namespace std;

//to print all the unique value in array
void unique_val(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        bool is_unique = true;
        for (int j = 0; j < size; j++)
        {
            if( i!= j && arr[i] == arr[j]){
                is_unique = false;
                break;
            }
        }
        
    if ( is_unique )
    {
        cout<<arr[i]<<" ";
    }
}
}

int main()
{
    int arr[] = {1,2,3,4,5,5,5,6,7};
    int size = sizeof(arr)/sizeof(int);

    cout<<"UNIQUE ELEMENT: ";
    unique_val(arr,size);

    return 0;
}