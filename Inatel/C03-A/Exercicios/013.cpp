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
int hash_search(vector<HashEntry>& t, int m, int k) 
{
    int i = 0;
    int j;
    do 
    {
        j = hash1(k, i, m);
        if (t[j].key == k) 
        {
            return j;
        }
        i++;
    } while (t[j].status != -1 && i < m);
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

    int key_Search;
    cin >> key_Search;
    int position = hash_search(hashTable, m, key_Search);
    if (position != -1) 
    {
        cout << "Chave " << key_Search << " encontrada na posicao " << position << endl;
    } 
    else 
    {
        cout << "Chave "<< key_Search << " nao encontrada" << endl;
    }

    return 0;
}
