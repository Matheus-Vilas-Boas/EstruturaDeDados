#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raiz(double X, double X0, double E)
{
    if(abs(X0 * X0- X) <= E)
    {
        return X0;
    }
    else
    {
        X0 = (X0 * X0 + X) / (2 * X0);
        return raiz(X, X0, E);
    }
}

int main()
{
    cout << fixed << setprecision(4);
    double X, X0, E;
    cin >> X >> X0 >> E;
    cout << raiz(X, X0, E) << endl;
    
    return 0;
}