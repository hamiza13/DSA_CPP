#include <iostream>
using namespace std;

//calculate nCr binomial coefficient of n and r.
int fact(int num){
    int fact=1;
    for (int i = 1; i <= num; i++)
    {
        fact*=i;
    }

     return fact;
    
}

int nCr(int n, int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nmrfact = fact(n-r);

    return nfact / (rfact * nmrfact);
}

int main()
{
    cout<<"CALCULATE nCr BINOMIAL COEFFICIENT OF n AND r."<<endl;
    int n;
    int r;
    cout<<" ENTER VALUE OF n: ";
    cin>>n;
    cout<<" ENTER VALUE OF r: ";
    cin>>r;
    cout<<nCr(n,r)<<endl;

    return 0;
}