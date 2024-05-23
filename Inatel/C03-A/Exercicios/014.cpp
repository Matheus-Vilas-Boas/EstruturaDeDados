#include <iostream>
#include <vector>

using namespace std;


struct HashEntry 
{
    int key;
    int status; 
    HashEntry() : key(-1), status(0) {} 
};


int hash_aux(int k, int m) 
{
    int result = k % m;
    if (result < 0) {
        result += m;
    }
    return result;
}


int hash1(int k, int i, int m) 
{
    return (hash_aux(k, m) + i) % m;
}


int hash_insert(vector<HashEntry>& t, int m, int k) {
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


int hash_search(vector<HashEntry>& t, int m, int k) 
{
    int i = 0;
    int j;
    do 
    {
        j = hash1(k, i, m);
        if (t[j].key == k && t[j].status == 1) 
        {
            return j;
        }
        i++;
    } while (t[j].status != 0 && i < m);
    return -1;
}

int hash_remove(vector<HashEntry>& t, int m, int k) 
{
    int j = hash_search(t, m, k);
    if (j != -1) 
    {
        t[j].status = 2; 
        t[j].key = -1;    
        return 0;         
    } 
    else 
    {
        return -1;       
    }
}

int main() 
{
    int m;
    cin >> m;

    
    vector<HashEntry> hashTable(m);

    int k;
    while (cin >> k && k != 0) 
    {
        hash_insert(hashTable, m, k);
    }

    int key_to_remove;
    cin >> key_to_remove;


    hash_remove(hashTable, m, key_to_remove);

    
    for (int i = 0; i < m; ++i) 
    {
        cout << hashTable[i].key;
        if (i < m - 1) {
            cout << " ";
        }
    }
    cout << " ";
    cout << endl;

    return 0;
}
