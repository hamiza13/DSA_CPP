#include <iostream>
#include <vector>
using namespace std;

//searching single element in sorted array!

int single_element(vector<int> & arr)
{
    int start = 0, end = arr.size() - 1, n = arr.size();
    //edge cases
    if(n == 1) return 0;
    if (arr[0] != arr [1]) return 0;
    if(arr[n-1] != arr[n-2]) return 1;
    
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if (arr[mid + 1] != arr[mid] && arr[mid] != arr[mid - 1])
        {
            return mid;
        }
        // for even array
        if(mid%2 == 0)
        {
        if (arr[mid - 1] == arr[mid]) // for left side
        {
            end = mid -1;
        }else//for right side
        {
            start = mid + 1;
        }
        }
        else
        {
        // for odd array
        if (arr[mid - 1] == arr[mid])// for right side
        {
            start = mid + 1;
        }
        else// for left side
        {
            end = mid - 1;
        }
        }
    }
    return -1;
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
    int index = single_element(arr);
    if (index != -1)
    {
        cout<<"SINGLE ELEMENT IS "<<arr[index]<<" IN SORTED ARRAY AT INDEX: "<<index<<endl;
    }else
    {
        cout<<"ELEMENT NOT FOUND!";
    }

    return 0;
}