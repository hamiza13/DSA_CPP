#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENTER YOUR AGE:"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"YOU CAN VOTE!"<<endl;
    }else{
        cout<<"YOU CANNOT VOTE!"<<endl;     
    }
return 0;
}