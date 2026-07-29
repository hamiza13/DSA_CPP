#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    int oddsum=0;
    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
            oddsum=oddsum+i;
        }
        cout<<endl;
    }
    cout<<"SUM OF ODD NUMBER = "<<oddsum<<endl;

    return 0;
}