#include <iostream>

using namespace std;

void insertionSort(int vet[], int tam) 
{
    int i, key, j;
    for (i = 1; i < tam; i++)  //6n + 4
    {
        key = vet[i]; // 3n
        j = i - 1; // 3n
        while (j >= 0 && vet[j] > key) 
        {
            vet[j + 1] = vet[j]; // 4n^2
            j = j - 1; // 2n^2
        }
        vet[j + 1] = key; //2n
    }
} // {T = 14n + 6n^2 + 4 ou O(n^2)} assintótica
// O(1) {modelo RAM}

void selection_sort(int vetor[], int n)
{
    for (int i = 0; i < n; i++)     // 1 + 3n + 3n + 3
    {
        int menor = vetor[i], pos_menor = j, aux;  // 5n
        for (int j = i+1; j < n; j++) // 6n + 3n^2
        {
            if (vetor[j] < menor)   //2n^2
            {
                menor = vetor[j]; // (3n/2)n
                pos_menor = j; // (2n/2)n
            }

            aux = vetor[j]; // 3n
            vetor[j] = menor; // 3n
            vetor[pos_menor] = aux; // 3n
            
        }
        
    }
    
}   //T = 7,5n^2 + 26n + 4 ou O(n^2)} assintótica
// O(1) {modelo RAM}


void bubbleSort(int vet[], int tam)
{
    int i, j; 
    int trab;
    bool troca;
    int lim;

    troca = true; //1
    lim = tam - 1; // 3

    while (troca)
    {
        troca = false; // n
        for ( i = 0; i < lim; i++) //1 + 3n^2 + 3n^2
        {
            troca = false; // n^2
            if (vet[i] > vet[i+1]) //4n^2
            {
                trab = vet[i]; //2n^2
                vet[i] = vet[i + 1]; // 3n^2
                vet[i + 1] = trab; // 2n^2
                j = i; // 3n^2
                troca = true; // n^2
            }
            lim = j; // 2n
            
        }
    }
}  // T 22n^2 + 3n + 1 ou O(n^2)} assintótica
// O(1) {modelo RAM}

int main()
{
    

    return 0;
}

//Amboas algoritmos apresentam a mesma complexidade, sendo nenhum deles claramente mais rápido que outro.