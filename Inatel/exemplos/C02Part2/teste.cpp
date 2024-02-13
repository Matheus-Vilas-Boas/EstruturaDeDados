#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(4);
    float fx, x, pi, m, p;
    pi = 3.14159;

    cin >> x >> m >> p;

    fx = 1/sqrt(2*pi * pow(p, 2))* exp(pow((x-p), 2) / 2*pow(p,2));

    cout << fx << endl;

    return 0;
}
