#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    float Salario, Horas, Preco;
    int Numero;
    
    cin >> Numero;
    cin >> Horas;
    cin >> Preco;
    Salario = Preco * Horas;
    cout << "NUMBER = " << Numero << endl;
    cout << "SALARY = U$ " << Salario << endl;  
    return 0;
}