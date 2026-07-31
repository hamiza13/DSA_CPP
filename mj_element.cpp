#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//first sorting then find majority element, time complexity O(nlogn)
int mj_element(vector<int> nums, int n)
{
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1])
        {
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2)
        {
            return ans;
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
    
    int result = mj_element(arr, n);
    if (result != -1)
    {
        cout<<"MAJORITY ELEMENT: "<<result;
    }
    else
    {
        cout<<"NONE!";
    }
    

    return 0;
}