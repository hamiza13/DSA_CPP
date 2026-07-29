#include <iostream>
#include<vector>
using namespace std;

// reverse array by using vector!
void reverse_vector(vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout << "ENTER SIZE OF AN ARRAY: ";
    cin >> n;

    vector<int>arr(n);
    cout << "ENTER " << n << " ELEMENT: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    reverse_vector(arr);
    cout << "REVERSE ARRAY: ";
    for (int val : arr)
    {
        cout << val << " ";
    }    

    return 0;
}