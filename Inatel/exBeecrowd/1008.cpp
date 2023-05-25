#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    string nome;
    double Salario, Vendas, Comissao, Total;
    
    cin >> nome;
    cin >> Salario;
    cin >> Vendas;
    Comissao = 0.15 * Vendas;
    Total =  Comissao + Salario;
    cout << "TOTAL = R$ " << Total << endl;
    
    
    return 0;
}