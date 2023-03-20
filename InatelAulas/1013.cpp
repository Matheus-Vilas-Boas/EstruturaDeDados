#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y, z;
    cin >> x >> y >> z;

    if ( x > y  && x > z)

    cout << x <<"eh o maior\n";

    if (y > x && y > z )

    cout << y <<"eh o maior\n";

    else 
    cout << z <<"eh o maior\n";
 
    return 0;
}