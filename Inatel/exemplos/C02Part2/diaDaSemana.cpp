#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dia, mes, ano;
    int n, ds, g, f, delta;
    float frac, intpart;

    cin >> dia >> mes >> ano;

    if(mes > 2)
    {
        g = ano;
        f = mes + 1;
    }
    else if(mes <= 2)
    {
        g = ano - 1;
        f = mes + 13;
    }
    n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;


    if(n < 36523)
    {
        delta = 2;
    }
    else if( 36523 <= n and n < 73048){
        delta = 1;
    }
    else if(n >= 73048){
        delta = 0;
    }

    frac = modf(n/7.0, &intpart);

    ds = round(frac * 7) + delta + 1;
    //cout << ds;

    if(ds == 1)
    {
        cout << "Domingo\n";
    }
    else if (ds == 2)
    {
        cout << "Segunda-feira\n";
    }
    else if (ds == 4)
    {
        cout << "Terça-feira\n";
    }
    else if (ds == 4)
    {
        cout << "Quarta-feira\n";
    }
    else if (ds == 5)
    {
        cout << "Quinta-feira\n";
    }
    else if (ds == 6)
    {
        cout << "Sexta-feira\n";
    }
    else if (ds == 7)
    {
        cout << "Sabado\n";
    }
    
    
    return 0;
}