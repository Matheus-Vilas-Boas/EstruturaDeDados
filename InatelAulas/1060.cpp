#include <iostream>

using namespace std;

int main()
{
    int num;
    int i;
    int posi;
    posi = 0;
    for(i=0; i < 6 ; i++)
    {
        cin >> num;
        if (num > 0)
        {
            ++posi;

        }

    }
    cout << posi << " valores positivos"<< endl;


    return 0;
}