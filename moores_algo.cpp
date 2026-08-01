#include <iostream>
#include <vector>
using namespace std;

//moore's voting algorithm, time complexity O(n)!

int main()
{
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>> n;

    vector<int> nums(n);
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(freq == 0){
            ans = nums[i];
        }if (ans == nums[i])
        {
            freq++;
        }else
        {
            freq--;
        }
    
    }
        cout<<"MAJORITY ELEMENTS:"<<ans<<endl;
    

    return 0;
}