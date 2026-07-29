#include <iostream>
using namespace std;

// to print nth fibonacci series.
void fibonacci(int n){
    int a=0, b=1, c;

    cout<<"FIBONACCI SERIES!"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    
}

int main()
{
    int n;
    cout<<"ENTER NUMBER TO PRINT FIBONACCI SERIES: ";
    cin>>n;

    fibonacci(n);
    
    return 0;
}