#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double num, res;
    int i;
    int posi;
    posi = 0;
    res = 0;
    float div;
    div = 0;
    for(i=0; i < 6 ; i++)
    {
        cin >> num;
        if (num > 0)
        {
            ++posi;
            res = res +num;
        }

    }
    div = res / posi;
    cout << posi << " valores positivos"<< endl;
    cout << div <<endl;;

    return 0;
}