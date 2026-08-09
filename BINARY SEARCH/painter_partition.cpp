#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

//finding minimum possible maximum partition!
bool is_possible(vector<int> & arr, int n, int m, int max_allowed_time){
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= max_allowed_time)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    
    }
    return painter > m? false : true;
}
int painter_partition(vector<int> & arr, int m){
    int n = arr.size();
    if(m>n) return -1;

    int start = *max_element(arr.begin(), arr.end());//for maximum value address
    int end = accumulate(arr.begin(), arr.end(),0);// for sum
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (is_possible(arr, n, m, mid))
        {//left side
            ans = mid;
            end = mid - 1;
        }
        else
        {//right side
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout<<"ENTER NO. OF BOARDS: ";
    cin>>n;
    cout<<"ENTER NO. OF PAINTERS: ";
    cin>>m;

    vector<int> arr(n);
    cout<<"ENTER TIME TO PAINT EACH BOARD: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = painter_partition(arr,m);
    if (result != -1)
    {
        cout<<"MINIMUM POSSIBLE MAXIMUM TIME: "<<result<<endl;
    }
    else
    {
        cout<<"PARTITION NOT POSSIBLE!"<<endl;
    }
    

    return 0;
}