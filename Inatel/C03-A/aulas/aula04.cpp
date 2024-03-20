#include <iostream>

using namespace std;

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
    
}   //T = 7,5n^2 + 26n + 4

int main()
{

    return 0;
}