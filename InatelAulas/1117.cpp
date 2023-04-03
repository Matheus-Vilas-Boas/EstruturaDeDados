#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int nota1, nota2;
    int media;
    cin >> nota1 >> nota2;

    while (nota1 && nota2 < 0 || nota1 && nota2 > 10)
    {
        cout << "nota invalida";
        cin >> nota1 >> nota2;
    }
    media = (nota1 + nota2)/2;
    cout << media << endl;


    
    return 0;
}