#include <iostream>
#include <vector>

using namespace std;

int pesquisa_binaria(const vector<int>& ids, int x) 
{
    bool encontrou;
    int baixo, meio, alto;

    baixo = 0;                    // 1
    alto = ids.size() - 1;           // 3

    encontrou = false;            // 1

    while ((baixo <= alto) && (encontrou == false))       // 6 log(n)
    {
        meio = (baixo + alto) /2;                         // 5
        if (x < ids[meio])       // 4 log(n)
        {
            alto = meio - 1;                              // 3
        }
        else
        {
            if (x > ids[meio])   // 4 log(n)
            {
                alto = meio + 1;                         // 3
            }
            else
            {
                encontrou = true;                        // 1
            }
        }
    }
    if (encontrou)
    {
        return meio;                                     // 0
    }
    else
    {
        return -1;                                       // 0
    }
}             

int main() 
{
    int n;
    cin >> n;

    vector<int> ids(n);

    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }

    int x;
    cin >> x;

    int corredor = pesquisa_binaria(ids, x);

    if (corredor != -1) {
        cout << "Corredor " << corredor << endl;
    } else {
        cout << "Nao localizado" << endl;
    }

    return 0;
}