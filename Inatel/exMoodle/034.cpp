#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2) {
    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 1; // Não há raízes reais
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return 0; // Existem raízes reais
    }
}

int main() {
 
    float a, b, c, x1, x2;
    cin >> a >> b >> c;

    int resultado = calc_raizes(a, b, c, x1, x2);

   if(resultado == 0)
   {
        if (x1 == x2)
        {
            cout << "X = " << x1 << endl;
        }
        if(x1 > x2)
        {
            cout << fixed << setprecision(2);
            cout << "x1 = " << x2 << endl;
            cout << "x2 = " << x1 << endl;
        }
   }
   else
   {
        
        cout << "Nao ha raizes reais" << endl;
   }
        
    return 0;
}
