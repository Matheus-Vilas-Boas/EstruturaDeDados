#include<iostream>
#include<string>

using namespace std;

int main()
{
        int valor1;
        int valor2;
        int resu;
    do
    {
        cout << "valor 1"  << endl;
        cin >> valor1;

        cout << "valor 2"  << endl;
        cin >> valor2;
        
    } while (valor1 && valor2 < 0);

        resu = (valor1 + valor2)/2;
      if (resu >= 10)
        {
            cout << "valor = " << resu  << " Aprovado"<< endl; 
        }
        else if (resu < 10)
        {
            cout << "valor = " << resu  << " Reprovado"<< endl; 
        }

        for ( int i = 1; i < 9; i++)
        {
            cout << "Valor de i = "<< i << endl;
        }
        
}