#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
    int result = k % m;
    if (result < 0)
    {
        result += m;
    }
    return result;
}

int hash1(int k, int m, int i)
{
    return (hash_aux(k, m) + i) % m;
}

int main()
{
    int k, m;
    cin >> k >> m;
    if (m > 0)
    {
        for (int i = 0; i < m; i++)
        {
            int posi = hash1(k, m, i);
            cout << posi << " ";
            
        }
        cout << endl;
    }
    return 0;
}