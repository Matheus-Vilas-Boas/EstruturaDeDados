#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    //Variáveis de Ambiente
    float notas[1000];
    int i;
    int alunos;
    int nota;
    int abaixo = 0;
    int acima = 0;
    float media;
    float soma;
    
    //Núcleo de processamento
    cin >> alunos;
    for (i = 0; i < alunos; i++)
    {
        cin >> notas[i];
        soma += notas[i];   
    }
    
    media = soma / alunos;
    
    for(i=0; i < alunos; i++)
    {
        if(notas[i] > media)
        {
            acima++;
        }
        else
        {
            abaixo++;
        }
    }
    //Saída
    cout << "Media da turma: " << media << endl;
    cout << " Alunos com nota acima da media: " << acima << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    return 0;
}