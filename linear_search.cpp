#include <iostream>
using namespace std;

//linear search algorithm
int linear_search(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {14, 26, 78, 31, -90, 51};
    int target;
    int size = sizeof(arr)/sizeof(int);

    cout<<"ARRAY ELEMENT: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
    cout<<"ENTER TARGET TO FIND IN AN ARRAY: ";
    cin>> target;

    int index = linear_search(arr, size, target);
    if (index == -1)
    {
        cout<<"ELEMENT NOT FOUND!";
    }
    else
    {
        cout<<"ELEMENT FOUND AT INDEX: "<<index;
    }

    return 0;
}