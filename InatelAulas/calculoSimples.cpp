#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    double Valor1, Valor2, Total;
    int Quantia1, Quantia2, Codigo1, Codigo2;
    
    cin >> Codigo1;
    cin >> Quantia1;
    cin >> Valor1;
    cin >> Codigo2;
    cin >> Quantia2;
    cin >> Valor2;
    Total =  (Quantia1 * Valor1) + (Quantia2 * Valor2);
    cout << "VALOR A PAGAR = R$ " << Total << endl;
    
    
    return 0;
}