#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int a = 7, b = 9;

    int sum = a+b;
    cout << sum << endl;

    int sub = a-b;
    cout << sub << endl;

    int div = a/b;
    cout << div << endl;

    int divrest = a%b;
    cout << divrest << endl;

    int mult = a*b;
    cout << mult << endl;

    float pot = pow (a,b);
    cout << pot << endl;

    float raiz = sqrt(b);
    cout << raiz << endl;

    double raiz2 = sqrt(a);
    cout << raiz2 << endl;

    return 0;
}