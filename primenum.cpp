#include <iostream>
using namespace std;
// to check if a number is prime or not
void prime(int num){
   if ( num <= 1) {
        cout<<"THE NUMBER IS NOT PRIME!";
        return;
   }
   if ( num == 2) {
   cout<<"THE NUMBER IS PRIME!";
   return;
   }

   for (int i = 2; i * i <= num; i++)
   {

    if (num % i == 0)
    {
        cout<<"THE NUMBER IS NOT PRIME!";
        return;
    }
    
   }
   cout<<"THE NUMBER IS PRIME!";
}

int main()
{
    int num;
    cout<<"ENTER NUMBER TO CHECK WHETHER IT IS PRIME OR NOT: ";
    cin>>num;

    prime(num);

    return 0;
}