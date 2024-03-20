#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //   
    cout << fixed << setprecision(2);
    cout << "calculando nota da prova" << endl;

    float N1, PJ1, EX1, NPT;
    cin >> N1 >> PJ1 >> EX1;

    NPT = N1 * 0.8 + 0.2 * sqrt((PJ1 * EX1));

    cout << "NOTA TOTAL: " << NPT << endl;
     
    
    return 0;
}