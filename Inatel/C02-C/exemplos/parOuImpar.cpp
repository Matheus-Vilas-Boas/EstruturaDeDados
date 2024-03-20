#include <iostream>

using namespace std;

int main()
{
   int num;
   cout << "Enter a number: "; 
   cin >> num;

   if(num % 2 == 0)
   {
    cout << "Par \n";
   }
   else
   {
    cout << "Impar \n";
   }
    return 0;
}