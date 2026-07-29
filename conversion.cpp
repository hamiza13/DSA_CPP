#include <iostream>
using namespace std;

// conversion binary to decimal or decimal to binary.
int DectoBin(int n){
    int ans = 0, pow = 1, rem;
    while (n>0)
    {
        rem = n % 2;
        n /= 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int BintoDec(int n){
    int ans = 0, pow = 1, rem;
    while(n>0)
    {
        rem = n % 10;
        ans += (rem * pow);
        n /= 10;
        pow = pow * 2;
    }
    return ans;
}

int main()
{
    int choice, num, result;
    cout<<"NUMBER CONVERTER"<<endl;

    cout<<"1. DECIMAL TO BINARY"<<endl;
    cout<<"2. BINARY TO DECIMAL"<<endl;

    cout<<"CHOOSE ONE OPTION: ";
    cin>>choice;
     
    if (choice == 1)
    {
        cout<<"ENTER DECIMAL NUMBER: ";
        cin>>num;

        result = DectoBin(num);
        cout<<"THE CONVERSION OF DECIMAL TO BINARY: "<<result<<endl;
    }
    else if (choice == 2)
    {
        cout<<"ENTER BINARY NUMBER: ";
        cin>>num;

        result = BintoDec(num);
        cout<<"THE CONVERSION OF BINARY TO DECIMAL: "<<result<<endl;
    }
    else
    {
        cout<<"INVALID OPTION!"<<endl;
    }
    
    return 0;
}