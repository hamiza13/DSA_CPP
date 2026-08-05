#include <iostream>
#include <vector>
using namespace std;

//binary search with recursion
int recbinarysearch(vector<int> arr, int target, int start, int end){
    if (start <= end)
    {
        int mid = start + (end - start)/2;
        if (target > arr[mid])
        {
            return recbinarysearch(arr, target, mid+1, end);
        }
        if (target < arr[mid])
        {
            return recbinarysearch(arr, target, start, mid-1);
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
    cout<<"ENTER TARGET TO FIND: ";
    cin>>target;

    int index = recbinarysearch(arr, target, 0 , n-1);
    if (index != target)
    {
        cout<<"ELEMENT FOUND AT INDEX: "<<index;
    }
    else
    {
        cout<<"ELEMENT NOT FOUND!";
    }
    
    return 0;
}