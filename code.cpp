#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER A NUMBER TO CHECK WHETHER IT IS POSITIVE OR NEGATIVE"<<endl;
    cin>>num;
    if(num>0){
        cout<<"THE ENTERED NUMBER IS POSITIVE!"<<endl;
    }else if(num<0){
        cout<<"THE ENTERED NUMBER IS NEGATIVE!"<<endl;     
    }else{
        cout<<"THE ENTERED NUMBER IS ZERO"<<endl;
    }
return 0;
}