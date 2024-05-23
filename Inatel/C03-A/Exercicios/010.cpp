#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
    int result;
    result = k % m;
    if (result < 0)
    {
        result += m;
    }
    return result;
    
}

int main()
{
    int k, m;
    while (cin >> k >> m && k!= 0 && m != 0)
    {
    int hash = hash_aux(k, m);
    cout << hash << endl;
    }
    return 0;
}