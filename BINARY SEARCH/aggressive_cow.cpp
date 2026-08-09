#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//finding largest minimum distance
bool is_possible(vector<int> & stalls, int k, int distance){
    int cows = 1, last_pos = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if ((stalls[i] - last_pos) >= distance)
        {
            cows++;
            last_pos = stalls[i];
        }
        if (cows == k)
        {
            return true;
        }
    }
    return false;
}
int aggressive_cow(vector<int> & stalls, int k){
    sort(stalls.begin(), stalls.end());
    int min = 1, max = stalls.back() - stalls[0];
    int ans = - 1;
    
    while (min <= max)
    {
        int mid = min + (max - min)/2;
        if (is_possible(stalls, k, mid))
        {
            ans = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cout<<"ENTER NO. OF STALLS: ";
    cin>>n;

    cout<<"ENTER NO. OF COWS: ";
    cin>>k;

    vector<int> arr(n);
    cout<<"ENTER STALLS POSITIONS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     
    int result = aggressive_cow(arr, k);
    cout<<"LARGEST MINIMUM DISTANCE: "<<result<<endl;

    return 0;
}