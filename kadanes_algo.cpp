#include <iostream>
#include <vector>
using namespace std;

//maximum subarray sum [KADANE'S ALGORITHM]

int main()
{
    int n ;
    cout << "ENTER SIZE OF ARRAY:";
    cin >> n;

    vector<int> arr(n);
    cout << "ENTER "<<n<<" ELEMENTS:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxsum = INT16_MIN;
    int currsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
    }
    if (currsum > maxsum)
    {
        maxsum = currsum;
    }
    if (currsum < 0)
    {
        currsum = 0;
    }
    
    cout << "MAXIMUM SUBARRAY SUM: " << maxsum <<endl;

    return 0;
}