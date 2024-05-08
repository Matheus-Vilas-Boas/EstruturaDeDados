#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
    return k % m;
}

int hash_linear(int k, int m, int i)
{
    return (hash_aux(k, m) + i) % m;
}

int main()
{
    int m = 13;
    int table_hash[m];
    int k, hk, i;
    for (int j = 0; j < m; j++)
    {
        table_hash[j] = -1;
    }
    while (cin >> k && k!= -1)
    {
        i = 0;
        while (i < m)
        {
            hk = hash_linear(k, m, i);
            if(table_hash[hk] == -1)
            {
                table_hash[hk] = k; 
                break;
            } 
            else 
            {
                i++;
            }
        }
        if (i == m)
        {
            cout << "Table full \n";
        }
        for(int j =0; j < m; j++)
        {
            if(table_hash[j] != -1)
            {
                cout << table_hash[j] << " : ";
            }
        }
    }
        

     while (cin >> k && k!= -1)
    {
        i = 0;
        while (i < m)
        {
            hk = hash_linear(k, m, i);
            if (table_hash[hk] == -1)
            {
                cout << "element not foud!\n";
                break;
            }
            else if (table_hash[hk] == k)
            {
                cout << " Position locate: " << hk << endl;
                break;
            }
            else
            {
                i++;
            }
        }
        if (i == m)
        {
            cout << "element not foud!\n";
        }
    }

    // delete element
    while (cin >> k && k!= -1)
    {
        i = 0;
        while (i < m)
        {
            hk = hash_linear(k, m, i);
            if (table_hash[hk] == -1)
            {
                cout << "element not foud!\n";
                break;
            }
            else if (table_hash[hk] == -2)
            {
                cout << " Position locate: " << hk << endl;
                break;
            }
            else
            {
                i++;
            }
        }
        if (i == m)
        {
            cout << "element not foud!\n";
        }
    }
    return 0;
}