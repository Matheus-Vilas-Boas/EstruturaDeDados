#include <iostream>

using namespace std;

int main()
{
    int numerator, denominator, divisor;
    cin >> numerator >> denominator;

    if (denominator == 0)
    {
        return numerator;
    }
    else
    {
        divisor = (denominator, numerator % denominator);
    }

    numerator /= divisor;
    denominator /= divisor;

    cout << numerator << " " << denominator << endl;
    
    return 0;
}