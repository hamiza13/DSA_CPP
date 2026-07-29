#include <iostream>
using namespace std;

//calculate N factorial
long long Nfact(int n){
    long fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"ENTER NUMBER TO FIND FACTORIAL: ";
    cin>>n;

    cout<<Nfact(n)<<endl;

    return 0;
}