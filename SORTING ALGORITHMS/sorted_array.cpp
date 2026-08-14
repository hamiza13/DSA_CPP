#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//optimal(DUTCH NATIONAL FLAG ALGORITHM)
void sorted_array(vector<int> & arr){
    int n = arr.size();
    int mid = 0, high = n - 1, low = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
         swap(arr[low], arr[mid]);
         mid++, low++;   
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    
}
void print(vector<int> & arr){
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    cout<<"BEFORE SORTING: ";
    print(nums);

    sorted_array(nums);

    cout<<"AFTER SORTING: ";
    print(nums);

    return 0;
}