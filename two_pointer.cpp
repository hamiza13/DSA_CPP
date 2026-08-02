#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// max water by two pointer approach
int max_water(vector<int> & height){
    int n = height.size(), max_water = 0;
    int lp = 0, rp = n - 1;
    
    while (lp < rp)
    {
        int h = min(height[lp], height[rp]);
        int width = rp - lp;
        int area = width * h;

        max_water =  max(area, max_water); 

        height[lp] < height[rp]? lp++ : rp--;    
    }
    return max_water;
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
    
    cout<<"MAX WATER: "<<max_water(arr);

    return 0;
}