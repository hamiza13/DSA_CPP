#include<iostream>

using namespace std;

int main()
{
    char ch;

    cout<<"ENTER CHARACTER TO CHECK WHETHER IT IS LOWERCASE OR UPPERCASE: "<<endl;

    cin>>ch;

    if(ch>='A' && ch<='Z')
    {
        cout<<"THE CHARACTER IS AN UPPERCASE"<<endl;

    }else{
        cout<< "THE CHARACTER IS A LOWERCASE"<<endl;
    }

    return 0;
}