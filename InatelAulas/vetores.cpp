#include <iostream>
#include <cstring>

using namespace std;

int vetores()
{
    float notas[5];
    int i;
    float media;
    int soma;

    soma = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> notas[i];
        
    }
    for (size_t i = 0; i < 5; i++)
    {
        soma = soma + notas[i];
    }
    media = soma / i;
    cout << "media = " << media << endl;
    return 0;
}
int vetor()
{
    int i;
    int popular;
    int maior;
    int nseguidores[3];

    for ( i = 0; i < 3; i++)
    {
        cin >> nseguidores[i];
    }
    maior = 1;
    for ( i = 0; i < 3; i++)
    {
        if (nseguidores[i] > maior)
        {
            maior = nseguidores[i];
            popular = i;
        }
        
    }
    cout << "maior = " << maior << endl;
    cout << "popular = " << popular << endl;
    return 0;
}
int svetor()
{
    char nome[50];
    char sobrenome[50];
    /*nome[0] = 'M';
    nome[1] = 'a';
    nome[2] = 't';
    nome[3] = 'h';
    nome[4] = 'e';
    nome[5] = 'u';
    nome[6] = 's';
    nome[7] = '\0';
    */
   strcpy(nome, "Vlad");
   strcpy(sobrenome, "Dracula");
   strcat(nome, " ");
   strcat(nome, sobrenome);
    cout << nome << endl;
    return 0;
}

int vetorIA()
{   
    char nome[50];
    cin.getline(nome,50);
    cout << nome << endl;
    return 0;
}
int vetorIA2()
{
    char senha[50];
    cin.getline(senha,50);

    while(strcmp(senha, "empalador") !=0)
    {
        cin.getline(senha,50);
        cout << "Senha errada!"<<endl;
    }
    cout << "Bem vindo" << endl;
    
    return 0;
}
int vetorIA3()
{
    char palavra1[50];
    char palavra2[50];
    int result;
    strcpy(palavra1, "anel");
    strcpy(palavra2, "bolacha");
    result = strcmp(palavra1, palavra2);

    
    cout << result << endl;
    return 0;
}
int vetorIA4()
{
    char palavra1[50];
    char palavra2[50];
    int result;
    strcpy(palavra1, "anel");
    strcpy(palavra2, "bolacha");
    result = strcmp(palavra1, palavra2);

    if (result < 0)
    {
        cout << "Ordem Alfabetica \n";
    }
    else
    {
        cout << " Nao esta em ordem Alfabetica \n";
    }
    
    return 0;
}
int vetorIA5()
{
    char nome[50];
    int idade;
    //cin.ignore();
    cin.getline(nome, 50);
    cin >> idade;

    cout << "Bom dia " << nome << ". Sua idade: " << idade << endl;
    cout << strlen(nome) << endl;
    
    return 0;
}
int main()
{
    vetorIA5();
    return 0;
}