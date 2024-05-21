#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int n) 
{
    int i, j, trab, contadorTrocas = 0;
    bool trocas = true;
    while (trocas) 
    {
        trocas = false;
        for (i = 0; i < n - 1; i++) {
            if (vetor[i] > vetor[i + 1]) 
            {
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;
                trocas = true;
                contadorTrocas++;
                cout << "New trab:" << trab << endl;
            }
        }
    }
    cout << "Contador:" << contadorTrocas << endl;
}

int main() 
{
    int n;
    cin >> n;
    int vetor[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> vetor[i];
    }
    bubbleSort(vetor, n);
    return 0;
}
