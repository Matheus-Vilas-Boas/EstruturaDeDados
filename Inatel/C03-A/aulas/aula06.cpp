#include <iostream>

using namespace std;

int recursividade(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num * recursividade(num -1);
}

//O(n)
int fribonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    return num  + fribonacci(num - 1) + fribonacci(num - 2);
    
}
//O(2^n)
int fribonacci_it(int n)
{
    int fib[n+1];
    fib[0] = 1;
    fib[1] = 1;
    for (int i=2; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}
//O(n)
int busca_binaria_recursiva(int vet[], int i, int f, int tam)
{
    int meio = (i + f) / 2;
    if (i > f)
    {
        return -1;
    }

    if (vet[meio] == tam)
    {
         return meio;
    }

    if(vet[meio] > tam)
    {
        return busca_binaria_recursiva(vet, i, meio - 1, tam);
    }
    else
    {
        return busca_binaria_recursiva(vet, meio + 1, f, tam);
    }     
}
// Teorema Mestre: T(n)= aT(n/b)+O(n^d)
int main()
{    
    return 0;
}