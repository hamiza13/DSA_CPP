#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//by using string

int main()
{
    string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout<<s;

    return 0;
}