#include <iostream>
#include <vector>
using namespace std;

//majority element for n/2, time complexity O(n^2)

int main()
{
    int n;
    cout<<"ENTER SIZE OF AN ARRAY:";
    cin>> n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"MAJORITY ELEMENTS IN AN ARRAY: ";
    bool found = false;
    for (int val : arr)
    {
        int freq = 0;
        for (int el : arr)
        {
            if (el == val)
            {
                freq++;
            }
        }
            if (freq > n/2)
            {
            cout<<val;
            found = true;
            break;
            }
    }
    
    return 0;
}