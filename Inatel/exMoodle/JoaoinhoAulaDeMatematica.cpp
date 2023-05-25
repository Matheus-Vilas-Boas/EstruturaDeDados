#include <iostream>

using namespace std;
int main()
{
    
    //variáveis de ambiente
    int numero;
    int i;
    
    //Núcleo de processamento
    cin >> numero;
    
    for(i=0; i <=10; i++)
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}