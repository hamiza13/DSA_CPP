#include <iostream>
#include <vector>
using namespace std;

//search in rotated sorted array!

int rotatedarray(vector<int> &arr , int target){
    int start = 0, end = arr.size()-1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else{
            if (arr[start] <= arr[mid])
            {//left sorted
                if (arr[start] <= target && target <= arr[mid] )
                {
                    end = mid - 1;
                }else
                {
                  start = mid + 1; 
                }

            }
            else
            { (arr[end] <= arr[mid]);
            //right sorted
                if (arr[mid] <= target && target <= arr[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;  
                }
            }
            
        }
        
    }
    return -1;
}
int main()
{
    cout<<"ROTATED SORTED ARRAY: ";
    vector<int> arr = { 3, 4, 5, 6, 7, 0, 1, 2};
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int target;
    cout<<"ENTER TARGET: ";
    cin>>target;

    int index = rotatedarray(arr, target);
    if (index == -1)
    {
        cout<<"INDEX NOT FOUND!"<<endl;
    }
    else
    {
        cout<<"TARGET FOUND AT INDEX: "<<index<<endl;
    }

    return 0;
}