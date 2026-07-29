#include <iostream>
#include<vector>
using namespace std;

//finding single number by using vector!

int main()
{
    int n;
    cout << "ENTER SIZE OF AN ARRAY: ";
    cin >> n;

    vector<int> nums(n);
    cout << "ENTER " << n << " ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    cout << "SINGLE NUMBER: " << ans <<endl;

    return 0;
}