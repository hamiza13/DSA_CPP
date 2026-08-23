#include <iostream>
#include <string>
using namespace std;

bool is_alpha_numeric(char ch){
    if ((ch >= '0' && ch <= '9') || (tolower(ch)>= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}
bool valid_palindrome(string s){
    int start = 0, end = s.length();
    while (start < end)
    {
        is_alpha_numeric(! s[start]), start++;
        continue;

        is_alpha_numeric(! s[end]), end--;
        continue;
        
        if (tolower (s[start]) != tolower(s[end]))
        {
            return false;
            start++, end --;
        }
        
    }
    return true;
}
int main()
{
    string str;
    cout<<"ENTER STRING: ";
    getline(cin, str);

    if (valid_palindrome(str)){
        cout<<"VALID PALINDROME!"<<endl;
    }
    else
    {
        cout<<"NOT A VALID PALINDROME!"<<endl;
    }

    return 0;
}