#include <iostream>
#include <vector>
using namespace std;

//finding peak index in mountain array!
int peakindex(vector<int> & arr){
    int start = 1, end = arr.size() - 2;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
        return mid;
        }if(arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }else
        {
            end = mid - 1;
        }

    }
    return -1;
}

int main()
{
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int index = peakindex(arr);
    if(index == -1)
    {
        cout<<"PEAK INDEX NOT FOUND!"<<endl;
    }
    else
    {
    cout<<"THE PEAK INDEX IN A MOUNTAIN ARRAY: "<<index<<endl;
    }

    return 0;
}