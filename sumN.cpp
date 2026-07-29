#include <iostream>
using namespace std;

//calculate sum of numbers from 1 to N
int sumN(int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"ENTER ANY NUMBER TO FIND SUM FROM 1 TO N: ";
    cin>>n;
    cout<<sumN(n)<<endl;
    return 0;
}