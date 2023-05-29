#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nJogadores;
    cin >> nJogadores;

    for (int i = 0; i < nJogadores; i++)
    {
        string nome;
        int idade;

        cin.ignore(); // Limpar o caractere de quebra de linha do input anterior

        getline(cin, nome);
        cin >> idade;

        if (idade >= 18)
        {
            cout << nome << " " << idade << endl;
        }
    }

    return 0;
}
