#include<iostream>
using namespace std;
int main(){

    int n=7;
    
   cout<<"ENTER A NUMBER TO PRINT SQUARE PATTERN: ";
    cin>>n;
    
    for(int i = 0; i <n; i++){
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}