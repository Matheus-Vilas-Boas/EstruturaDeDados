#include <iostream>

using namespace std;

int cont()
{
    int i;
    int n;
    int c;
    c =0;
    for ( i = 0; i < 7; i++)
    {
        cin >> n;
        if (n > 0)
        {
            c++;
        }


    }
    cout << c << " valores positivos" << endl;
    return 0;
}

int main()
{
    /*float altura;
    float maior;
    float menor;
    int i;
    int nPessoas;

    cin >> nPessoas;

    maior = 0;
    menor = 0;


    for (i = 0; i < nPessoas; i++)
    {
        cout << "Sua altura: \n";
        cin >> altura;
        if (altura > maior)
        {
            maior = altura;

        }
        if (altura > menor)
        {
            menor = altura;
        }
        
        
    }
    cout << "O maior e:" << maior << endl;
    cout << "O menor e:" << menor << endl;
    */
   cont();
    return 0;
}

