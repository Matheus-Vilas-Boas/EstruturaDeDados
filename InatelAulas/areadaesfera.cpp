#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
    cout << fixed << setprecision(3);
    double Raio, pi, Volume;
    pi = 3.14159;
    cin >> Raio;
    Volume = 4.0/3 * pi * pow(Raio, 3);
    cout << "VOLUME = " << Volume << endl;  
    return 0;
}