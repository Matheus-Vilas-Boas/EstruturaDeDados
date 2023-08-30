#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float number, nCeil, nFloor;
    cin >> number;
    
    nCeil = ceil(number);
    nFloor = floor(number);

    cout << nCeil << " " << nFloor << endl;
    
    return 0;
}