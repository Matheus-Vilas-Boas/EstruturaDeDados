#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
    cout << fixed << setprecision(3);
    double Raio, pi, Area;
    pi = 3.14159;
    cin >> Raio;
    Area =  pi * pow(Raio, 2);
    cout << "AREA = " << Area << endl;  
    return 0;
}