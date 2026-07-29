#include <iostream>
using namespace std;

//to print intersection of two arrays!

void intersection(int arr1[], int size1, int arr2[], int size2 ){

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                break;
            }
            
        }
        
    }
    
}
int main()
{
    int n1, n2;
    cout<<"ENTER SIZE OF ARRAY: ";
    cin>>n1;

    int arr1[n1];
    cout<<"ENTER FIRST ARRAY OF "<<n1<<" ELEMENT :";
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }

    cout<<"ENTER SIZE OF ARRAY: ";
    cin>>n2;

    int arr2[n2];
    cout<<"ENTER SECOND ARRAY OF "<<n2<<" ELEMENT :";
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    

    cout<<"INTERSECTION OF TWO ARRAYS ARE: ";
    intersection(arr1,n1,arr2,n2);

    return 0;
}