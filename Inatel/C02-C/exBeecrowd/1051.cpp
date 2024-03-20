#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    
    float s, i;
    cin >>s;
    
    if(s == 0 || s < 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if( s == 3002.00)
    {
        i = 0.08 * 1000 + 0.18 * 2;
        cout << "R$ " << i << endl;
    }
    else if(s > 2000.01 || s < 3000.00)
    {
        i = s * 0.08;
        cout << "R$ " << i << endl;
    }
     else if(s > 3002.01 || s <= 4500.00)
    {
        i = s * 0.18;
        cout << "R$ " << i << endl;
    }
     else if(s > 4500 )
    {
        i = (s - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08);

        cout << "R$ " << i << endl;
    }
    return 0;
}