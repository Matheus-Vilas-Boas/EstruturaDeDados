#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inteiro;
    inteiro = 35;

    cout << inteiro << endl;

    float real;
    real = 3.6;
    cout << real << endl;

    bool boleano;
    boleano = true;
    cout << boleano << endl;

    string text;
    text = "ABACATE";
    cout << text << endl;

    char unit;
    unit = 'b';
    cout << unit << endl;

    int idade;
    cout << ("Qual a sua idade?\n");
    cin >> idade;
    cout <<"Idade = " << idade << endl;
    return 0;
}

