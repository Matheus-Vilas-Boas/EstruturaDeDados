#include <iostream>

using namespace std;

int main()
{
    //Variáveis de ambiente
    int votos[1000];
    int resultado;
    resultado = 0;
    int qntVotos;
    int i;
    
    // Núcleo de processamento
    cin >> qntVotos;
    
    for (i = 0; i < qntVotos; i++)
    {
        cin >> votos[i];
        
    }
    for (i = 0; i < qntVotos; i++)
    {
        resultado += votos[i];
    }
    // condições de existência
    if(resultado > 0)
    {
        cout << "A maioria gostou" << endl;
    }
    else if(resultado < 0)
    {
        cout << "A maioria nao gostou" << endl;
    }
    else 
    {
        cout << "Deu empate" << endl;
    }
   
    return 0;
}