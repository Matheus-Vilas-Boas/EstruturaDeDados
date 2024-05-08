#include <iostream>

using namespace std;

void quicksort(int vet[], int i, int j, int tam)
{
    int aux, esq, dir, pivo;
    esq = j;
    dir = i;

    pivo = vet[(esq+ dir)/2];
    do
    {
        while (vet[esq] < pivo)
        {
            esq++;
        }
        while (vet[dir] > pivo)
        {
            dir--;
        }
        if (esq < dir)
        {
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir] = aux;
            vet[esq]++;
            vet[dir]--;
        } 
    } while (esq < dir);
    if (dir - i >=0)
    {
        quicksort(vet,i,dir-1,tam);
    }
    if (j - esq >= 0)
    {
        quicksort(vet,esq + 1 ,j,tam);
    }
    
}
int main()
{
    int n = 7;
    int arr[7] = {34,3,2,8,5,13,21};
    quicksort(arr,0,n-1,n);
    for (int i=0 ; i<n ; i++)
    {
       cout << arr[i] << endl;
    }
    return 0;
}