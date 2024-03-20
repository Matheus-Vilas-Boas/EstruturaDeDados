#include <iostream>

using namespace std;

int main()
{
    float nota;
    float soma;
    float media;
    soma = 0;
    int i;
    int num;
    cin >> num;
    for ( i = 0; i < num; i++)
    {
        cin>> nota;
        soma = soma + nota;
    }
    
    media = nota / num;
    cout << soma <<endl;
    return 0;
}