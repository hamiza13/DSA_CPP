#include <iostream>
using namespace std;

//find smallest or largest number in an array

void smallest_largest(int arr[], int size){

    int smallest = INT16_MAX;
    int largest = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i] , smallest);
        largest = max(arr[i] , largest);
    }
    cout<<"SMALLEST: "<<smallest<<endl;
    cout<<"LARGEST: "<<largest<<endl;
}
int main()
{
    int num[] = {5, 15, 22, 1, -15, -24};
    int size = sizeof(num)/sizeof(int);

    smallest_largest(num , size);

    return 0;
}