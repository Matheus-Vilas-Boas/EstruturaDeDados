#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    int c, q;
    float v;
    
    cin >> q;
    cin >> c;

    switch (q)
    {
    case 1:
        v = c * 4.00;
        cout << "Total: R$ " << v<< endl;
        break;

    case 2:

        v = c * 4.50;
        cout << "Total: R$ " << v<< endl;
        break;

    case 3:
        v = c * 5.00;
        cout << "Total: R$ " << v << endl;
        break;

    case 4:
        v = c * 2.00;
        cout << "Total: R$ " << v<< endl;
        break;

    case 5:
        v = q * 1.50;
        cout << "Total: R$ "<< v << endl;
        break;
        
    default:
        cout << "Valor nao encontrado"<< endl;
        break;
    }
 
    return 0;
}