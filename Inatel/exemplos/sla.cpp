#include <iostream>

using namespace std;

void soma(int a, int b, int &s)
{
    s = a + b;
}
int main()
{
    int x, y;
    int r = 0;
    cin >> x >> y;
    soma(x, y, r);
    cout << r << endl;
    return 0;
}