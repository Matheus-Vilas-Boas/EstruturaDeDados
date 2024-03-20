#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
int main() {
    cout << fixed << setprecision(5);
    double a, b, c, R1, R2;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a == 0 || (b * b -4 * a * c) < 0)
    {
        cout << "Impossivel de calcular";
    }
    else
    {
        R1 = (-b - sqrt((b * b -4 * a * c)))/(2 *a);
        R2 = (-b + sqrt((b * b -4 * a * c)))/(2 *a);

        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;

    }
 
    return 0;
}