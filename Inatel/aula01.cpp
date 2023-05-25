#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int calc ()
{
    float valor1;
    float raiz;
    float valor;

    //cout << fixed << setprecision(2);
    cout << "Qual o valor: ";
    cin >> valor1;

    raiz = sqrt(valor1);
    cout << raiz << endl;

    valor = pow(valor1, 1.0/3);

    cout << valor << endl;

    return 0;
}

int main ()
{
    calc();
    return 0;
}
