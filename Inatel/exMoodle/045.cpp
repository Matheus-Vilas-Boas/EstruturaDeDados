#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double A, B, C;
    const double PI = 3.14159;

    cin >> A >> B >> C;

    cout << "TRIANGULO: "<< (A * C)/2.0 << endl;
    cout << "CIRCULO: "  << PI * C * C << endl;
    cout << "TRAPEZIO: " << (A + B)/2.0 * C << endl;
    cout << "QUADRADO: " << B * B << endl;
    cout << "RETANGULO: "<< A * B << endl;

    return 0;
}