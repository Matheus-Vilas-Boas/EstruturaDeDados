#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool possuiAcesso(const vector<int>& ids, int id) 
{
    int esq = 0, dir = ids.size() - 1;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (ids[meio] == id) 
        {
            return true; 
        } else if (ids[meio] < id) 
        {
            esq = meio + 1;
        } else 
        {
            dir = meio - 1;
        }
    }
    return false; 
}

int main() {
    vector<int> ids;

  
    int id;
    while (cin >> id && id != -1) 
    {
        ids.push_back(id);
    }

    sort(ids.begin(), ids.end());

   
    int idVerificar;
    cin >> idVerificar;

    
    if (possuiAcesso(ids, idVerificar)) 
    {
        cout << "Possui acesso" << endl;
    } else 
    {
        cout << "Nao possui acesso" << endl;
    }

    return 0;
}
