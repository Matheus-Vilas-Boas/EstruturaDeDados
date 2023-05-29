#include <iostream>
#include <string>
#include <iomanip> // Biblioteca para manipulação de precisão de casas decimais

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int alunos;
    cin >> alunos;

    for (int i = 0; i < alunos; i++)
    {
        string nome;
        int n1, n2, n3, n4;

        cin.ignore(); 

        getline(cin, nome);
        cin >> n1 >> n2 >> n3 >> n4;

        float media = (n1 + 2*n2 + 3*n3 + 4*n4) / 10.0;

        cout << nome << " " << media << endl;
    }

    return 0;
}
