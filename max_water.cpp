#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//by brute force approach
int max_water(vector<int> & height){
    int n = height.size(), maxwater = 0;
    for (int i = 0; i < n; i++)
    {
         for (int j = i + 1; j < n ; j++)
         { 
            int width = j - i;
            int h = min(height[i], height[j]);
            int area = width * h;
            maxwater = max(maxwater, area);
         }
         
    }
    return maxwater;
}
int main()
{
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>> n;

    vector<int> store(n);
    cout<<"ENTER "<<n<<" HEIGHT: ";
    for (int i = 0; i < n; i++)
    {
        cin>>store[i];
    }

    cout<<"MAX WATER: "<<max_water(store);

    return 0;
}