#include <iostream>
#include <cstring>
using namespace std;

//by using char arr!

void reverse_string(char str[]){
    int start = 0, end = strlen(str) - 1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    
}

int main()
{
    char str[100];
    cout<<"ENTER STRING: ";
    cin.getline(str, 100);

    reverse_string(str);

    cout<<"REVERSE STRING: "<<str<<endl;

    return 0;
}