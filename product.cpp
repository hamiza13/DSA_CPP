#include <iostream>
#include <vector>
using namespace std;

// product of an array except self but brute force approach!
vector<int> product(vector<int> & nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= nums[j];
            }
            
        }
        ans[i] = product;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = product(nums);

    for (int x : result ) cout<<x<<" ";

    return 0;
}