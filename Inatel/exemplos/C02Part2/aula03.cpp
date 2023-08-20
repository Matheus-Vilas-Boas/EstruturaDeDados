#include <iostream>

using namespace std;

int main()
{
    char Ferr;

    cout << "Sua resposta: ";
    cin >> Ferr;

    if(Ferr == 'S' || Ferr == 's')
    {
        cout << "Estarei pronta na hora prometida!\n";
    }
    else
    {
        cout << "Farei o Math de otario!\n";
    }
    

    return 0;
}