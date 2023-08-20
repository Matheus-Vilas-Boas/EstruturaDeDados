#include <iostream>

using namespace std;

int main()
{
    int idade;
    char letra;

    cin >> idade;
    cin >> letra;

    if(idade < 10 (&& letra == 'V' || letra == 'v'))
    {
        cout << "Bem vindo\n";
    }
    else
    {
        cout << "Fora!\n";
    }
    return 0;
}