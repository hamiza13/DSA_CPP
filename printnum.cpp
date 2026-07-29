#include<iostream>
using namespace std;
int main(){
    int n=1;
    int num;
    cout<<"ENTER A NUMBER"<<endl;
    cin>>num;
    while(num>=n)
    {
        cout<<n<<" ";
        n++;
    }
    cout<<endl;
    return 0;
}