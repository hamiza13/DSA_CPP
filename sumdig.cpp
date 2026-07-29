#include <iostream>
using namespace std;

//calculate sum of digits of a number
int sumofdigit(int num){
    int sum=0;
    while (num>0)
    {
        int lastdig=num%10;
        num/=10;
        sum+=lastdig;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"ENTER NUMBER TO FIND SUM OF DIGITS: ";
    cin>>num;

    cout<<sumofdigit(num)<<endl;

    return 0;
}