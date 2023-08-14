#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    double Montante, Capital, Taxa, Lucro;
    int tempo;
    cin >> Capital >> Taxa;
    cin >> tempo;

    Montante = Capital * pow((1 + Taxa/100), tempo);
    Lucro = Montante - Capital;
    cout << "LUCRO = " << Lucro << endl;  
    return 0;
}