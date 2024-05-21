#include <iostream>

using namespace std;

int recursividade(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }
    return a * recursividade(a, n-1);
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << recursividade(a, n) << endl;
    
    return 0;
}