#include <iostream>
#include <vector>
using namespace std;

// to find minimum possible maximum pages
bool isvalid(vector<int> &arr, int m, int maxpages){
    int student = 1;
    int sumpage = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxpages)
        {
            return false;
        }
        
        if (arr[i] + sumpage <= maxpages)
        {
            sumpage += arr[i];
        }
        else{
            student++;
            sumpage = arr[i];
        }
        
    }
    return student > m? false : true;
}
int book_allocation(vector<int> & arr, int m){
    int start = 0, end = 0, n = arr.size();
    if (m > n) return -1;

    for (int i = 0; i < n; i++)
    {
        start = max( start , arr[i]);
        end += arr[i];
    }
    int ans = -1;
    while (start <= end )
    {
        int mid = start + (end - start)/2;
        if (isvalid(arr,m,mid))
        {
            ans = mid;
            end = mid - 1;
        }else
        {
            start = mid + 1;
        }
    }
    return ans;
    
}

int main()
{
    int n, m;
    cout<<"ENTER NO. OF BOOKS: ";
    cin>>n;
    cout<<"ENTER NO. OF STUDENTS: ";
    cin>>m;

    vector<int> arr(n);
    cout<<"ENTER PAGES IN EACH BOOK: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = book_allocation(arr,m);
    if (result != -1){
        cout<<"MINIMUM POSSIBLE MAXIMUM PAGES: "<<result<<endl;
    }
    else
    {
        cout<<"ALLOCATION NOT POSSIBLE!"<<endl;
    }
    
    return 0;
}