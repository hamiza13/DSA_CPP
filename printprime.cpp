#include <iostream>
using namespace std;

// to print all prime numbers from 1 to n.
void printprime(int num){
    if(num <= 1){
        cout<< "THE NUMBER IS NOT PRIME!";
        return;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num%i == 0)
        {
            return;
        }
    }
    cout<<num<<" ";
}

int main()
{
    int n;
    cout<< "ENTER ANY PRIME NUMBER: ";
    cin>>n;

    cout<< "PRIME NUMBER TILL "<<n<< " ARE: ";
    for (int i = 2; i <= n; i++)
    {
        printprime(i);
    }
        cout<<endl;
    
    return 0;
}