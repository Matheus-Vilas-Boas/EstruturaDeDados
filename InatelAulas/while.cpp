#include <iostream> 
using namespace std;

int main()
{

    int X ,Y;
    X = Y;
    cin >> X;
    cin >> Y;
    while (X != Y)
    {
        if (X > Y)
        {
            cout << "Decrescente" << endl;
        }
        else
        {
            cout << "Crescente" << endl;
        }
        cin >> X;
        cin >> Y;
    }
    return 0;
}