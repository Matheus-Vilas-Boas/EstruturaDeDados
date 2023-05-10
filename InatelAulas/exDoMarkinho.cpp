#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    /*VARIAVEIS*/
    float notas[1000];
    int i;
    int nota;
    int menor;
    int maior;
    float media;
    media = 0;
    menor = 0;
    maior = 0;
    
    /*ENTRADA*/

    /*SAIDA*/
    cout << "Media da turma: " << media << endl;
    cout << " Alunos com nota acima da media: " << maior << endl;
    cout << "Alunos com nota abaixo da media: " << menor << endl;
    return 0;
}