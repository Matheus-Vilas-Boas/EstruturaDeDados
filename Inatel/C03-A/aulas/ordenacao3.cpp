#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int>& vet, int i, int j) 
{
    int esq = i;
    int dir = j;
    int pivo = vet[(esq + dir) / 2];
    
    do {
        while (vet[esq] < pivo) 
        {
            esq++;
        }
        while (vet[dir] > pivo) 
        {
            dir--;
        }
        if (esq <= dir) 
        {
            swap(vet[esq], vet[dir]);
            esq++;
            dir--;
        }
    } while (esq <= dir);

    if (i < dir) 
    {
        quicksort(vet, i, dir);
    }
    if (esq < j) 
    {
        quicksort(vet, esq, j);
    }
}

int main() {
    vector<int> vet;
    int num;
    
    // Entrada
    while(true) 
    {
        cin >> num;
        if(num == -1) 
        {
            break;
        }
        vet.push_back(num);
    }

    // Ordenação
    quicksort(vet, 0, vet.size() - 1);

    // Saída
    for (int i = 0; i < vet.size(); i++) 
    {
       cout << vet[i] << " ";
    }

    return 0;
}
1 
1 + 3n + 3 = 3n+4
