#include <iostream>

using namespace std;

int main()
{
    int x;
    int i;
    
    cin >> x;
    
    for(i = 1; i <= x; i++)
    {
        if(i%2 == 0)
        {
            cout << i << "^2 = " << i*i << "\n";
        }
    }
    
    return 0;
}