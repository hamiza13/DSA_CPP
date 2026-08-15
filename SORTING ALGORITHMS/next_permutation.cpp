#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//optimal
void next_permutation(vector<int> & arr){
    //pivot
    int pivot = -1, n = arr.size();
    for (int i = n - 2; i > 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
        if (pivot == -1)
        {
            reverse(arr.begin(), arr.end());
            return ;
        }
        
    }//larger element
    for (int i = n - 1; i > pivot; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[i], arr[pivot]);
            break;
        }
        
    }//reverse
    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
}
void print(vector<int> & arr){
    for( int x : arr)
    cout<<x<<" ";
    cout<<endl;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    cout<<"BEFORE: ";
    print(arr);

    next_permutation(arr);

    cout<<"AFTER: ";
    print(arr);
    
    return 0;
}