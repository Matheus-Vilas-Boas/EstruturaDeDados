#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    float Seno;
    float res;
    float PI = 3.14159;
    cout << "Digite o valor do seno: ";
    cin >> Seno;
    res = sin(Seno*PI/180);

    cout << "Seno: " << res;

    return 0;
}