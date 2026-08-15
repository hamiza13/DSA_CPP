#include <iostream>
#include <vector>
using namespace std;

//merge sorted array!
void merge_sorted_array(vector<int>& A, int m, vector<int>& B, int n){
    int index = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[index--] = A[i--];
        }
        else
        {
            A[index--] = B[j--];
        }
        
    }
    while (j >= 0)
    {
        A[index--] = B[j--];
    }
    
}
void print(vector<int>& arr){
    for (int i = 0; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int m = 3, n = 3;
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};
    
    cout<<"A BEFORE: ";
    print(A);
    cout<<"B: ";
    print(B);

    merge_sorted_array(A, m, B, n);

    cout<<"AFTER MERGING : ";
    print(A);
    
    return 0;
}