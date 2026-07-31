#include <iostream>
#include<vector>
using namespace std;

// pair sum O(n^2)
void pair_sum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout<<"PAIR FOUND: "<<nums[i]<<" + "<<nums[j]<<endl;
                cout<<"INDEX: "<<i<<" "<<j<<endl;
                return;
            }
            
        }
        
    }
    cout<<"NO PAIR FOUND!"<<endl;
}

int main()
{
    int n, target;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" ELEMENTS:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"ENTER TARGET: ";
    cin>>target;
    
    pair_sum(arr, target);

    return 0;
}