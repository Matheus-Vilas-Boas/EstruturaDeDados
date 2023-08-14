#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    double Money, Preco, Troco;
    
    cin >> Money >> Preco;
    Troco = Money - Preco;
    cout << "TROCO = " << Troco << endl;  
    return 0;
}