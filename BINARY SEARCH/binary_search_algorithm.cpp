#include <iostream>
#include <vector>
using namespace std;

//binary search algorithm
int binarysearch(vector<int> & arr, int target){
    int start = 0, end = arr.size()-1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
        
    }
    return -1;
}

int main()
{
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" SORTED ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int target;
    cout<<"ENTER TARGET TO FIND IN AN SORTED ARRAY: ";
    cin>> target;

    int index = binarysearch(arr, target);
    if (index == -1)
    {
        cout<<"TARGET NOT FOUND!";
    }
    else
    {
    cout<<"THE ENTERED TARGET IS AT INDEX: "<<index;
    }

    return 0;
}