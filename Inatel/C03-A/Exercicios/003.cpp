#include <iostream>
#include <vector>

using namespace std;

int encontrarCorredor(const vector<int>& matriculas, int matricula) 
{
    int esq = 0;
    int dir = matriculas.size() - 1;

    while (esq <= dir) 
    {
        int meio = esq + (dir - esq) / 2;
        if (matriculas[meio] == matricula) 
        {
            return meio;
        } else if (matriculas[meio] < matricula) 
        {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }

    return -1;
}

int main() 
{
    int N;
    cin >> N;

    vector<int> matriculas(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> matriculas[i];
    }

    int matriculaProcurada;
    cin >> matriculaProcurada;

    int corredor = encontrarCorredor(matriculas, matriculaProcurada);

    if (corredor != -1) 
    {
        cout << "Corredor " << corredor << endl;
    } 
    else 
    {
        cout << "Nao localizado" << endl;
    }

    return 0;
}
