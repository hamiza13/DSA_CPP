#include<iostream>
using namespace std;

int main(){

    int count;
    cout<<"ENTER NUMBER: ";
    cin>>count;
    
    int sum =0;
    for (int i = 1; i <=count; i++)
    {
        cout<<i<<"\n";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"SUM = "<<sum<<endl;
    return 0;
}