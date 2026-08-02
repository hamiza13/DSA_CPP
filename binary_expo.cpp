#include <iostream>
using namespace std;

//
double bin_pow(double x, int n){
    long bin_form = n;
    double ans = 1;
    if (n < 0)
    {
        x = 1/x;
        bin_form = - bin_form;
    }
    if (n == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }
    if (x == -1 && n%2 != 0)
    {
        return -1;
    } 
    while (bin_form > 0)
    {
        if (bin_form % 2 == 1)
        {
            ans *= x;
        }
        x = x * x;
        bin_form /= 2;
    }
    return ans;
    
}

int main()
{
    double a; int b;
    cout<<"ENTER a AND b: ";
    cin>>a>>b;

    cout<<a<<"^"<<b<<" = "<<bin_pow(a,b);

    return 0;
}