#include <iostream>
using namespace std;

//sum and product of an array element 

void sum_product(int arr[], int size){
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout<<"SUM: "<<sum<<endl;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout<<"PRODUCT: "<<product<<endl;
}
int main()
{
    int n;
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>>n;

    int arr[n];
    cout<<"ENTER "<<n<<" ELEMENT: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sum_product(arr, n);
    
    return 0;
}