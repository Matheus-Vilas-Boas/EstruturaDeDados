#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    int c, q;
    float v;
    
    cin >> q;
    cin >> c;

    
    if(q == 1)
    {
        v = c * 4.00;
        cout << "Total: R$ " << v<< endl;
    }
    else if (q == 2)
    {
        v = c * 4.50;
        cout << "Total: R$ " << v<< endl;
    }
    else if (q == 3)
    {
        v = c * 5.00;
        cout << "Total: R$ " << v << endl;
    }
        else if (q == 4)
    {
        v = c * 2.00;
        cout << "Total: R$ " << v<< endl;
    }
        else if (c == 5)
    {
        v = q * 1.50;
        cout << "Total: R$ "<< v << endl;
    }
    else
    {
        cout << "Valor nao encontrado"<< endl;
    }
 
    return 0;
}