#include <iostream>

using namespace std;

void insertion_sort(int vetor[], int tam)
{
    int i, aux;
    int j;
    for (j = 1; i < tam; j++) // 1 + 3(n) + 3(n-1)
    {
        aux = vetor[j]; // 3(n-1)

        for (i = j-1; i >= 0 ; i--) //3(n-1) + 2(n-1) ((n/2) + 1) + 3 (n-1) (n/2)
        {
            if ( vetor[i] > aux) //4(n-1)(n/2)
            {
                vetor[i + 1] = vetor[i]; // 5(n-1)(n/2)
            }
            else
            {
                break;
            }
        } 
        vetor[i+1] = aux;
    } //O(n²)
}

int main()
{
    int n = 7;
    int vetor[n] = {7, 5, 2, 4, 1, 3, 6};

    insertion_sort(vetor, n);
    return 0;
}