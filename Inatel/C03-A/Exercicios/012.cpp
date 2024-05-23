#include <iostream>
#include <vector>

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

int hash1(int k, int i, int m) 
{
    return (hash_aux(k, m) + i) % m;
}

struct HashEntry 
{
    int key;
    int status; 
    HashEntry() : key(-1), status(-1) {}
};

int hash_insert(vector<HashEntry>& t, int m, int k) 
{
    int i = 0;
    int j;
    do 
    {
        j = hash1(k, i, m);
        if (t[j].status != 1) 
        {
            t[j].key = k;
            t[j].status = 1;
            return j;
        } 
        else 
        {
            i++;
        }
    } while (i != m);

    return -1;
}

int main() {
    int m;
    cin >> m;
    
    vector<HashEntry> hashTable(m);

    int k;
    while (cin >> k && k != 0) {
        hash_insert(hashTable, m, k);
    }

    for (int i = 0; i < m; ++i) 
    {
        if (hashTable[i].status == 1) 
        {
            cout << hashTable[i].key;
        } else 
        {
            cout << -1;
        }
        if (i < m - 1) 
        {
            cout << " ";
        }
    }
    cout << " ";

    return 0;
}