#include <iostream>

using namespace std;

int main()
{
    int senha;
    cin >> senha;
    while (senha  != 2002)
    {
        cout << "Senha Invalida" << endl;
        cin >> senha;
    }
     
    cout << "Acesso Permetido" << endl;
    return 0;
}