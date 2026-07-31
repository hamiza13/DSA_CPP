#include <iostream>
#include <vector>
using namespace std;

//for sorted array(pair sum optimal)
void sorted_array(vector<int> nums, int target){
    vector<int> ans;
    int i = 0, j = nums.size() - 1;
    while (i<j)
    {
        int ps = nums[i] + nums[j];
        if (ps > target)
        {
            j--;
        }else if(ps < target){
            i++;
        }
        else{
            cout<<"PAIR FOUND:"<< nums[i]<<" + "<<nums[j]<<endl;
            cout<<"INDEX: "<<i<<" "<<j<<endl;
            return;
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

    sorted_array(arr, target);

    return 0;
}