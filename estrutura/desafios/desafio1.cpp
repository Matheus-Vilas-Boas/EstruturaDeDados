#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//f(x) = x^2 -2x = 5
//usuario definira o valor de f(x)


double funcaoDeCalculo()
{
    double valorInserido;
    cout << "Digite um valor:"<< endl;
    cin >> valorInserido;
    double calculo;
    calculo = pow(valorInserido, 2) -2 * valorInserido +5;
    return calculo;
}
int main()
{
    double result;
    result = funcaoDeCalculo();
    cout << result << endl;
    return 0;
}