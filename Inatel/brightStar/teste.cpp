#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//  TUDO QUE VAI SER NECESSÁRIO PARA O PROJETO
/*
    1 - CRIAR UM ARQUIVO PARA  GUARDAR OS FILMES *
    2 - CRIAR UMA FORMA DE ACESSAR O ARQUIVO*
    3 - CRIAR UM SISTEMA DE PESQUISA
    4 - CRIAR UM VETOR PARA GUARDAR O ITEM PESQUISADO
    5 - CRIAR UM CÓDIGO QUE MATENHA O TUDO FUNCIONANDO
    5 - CRIAR UM CÓDIGO QUE RECOMENDE OS FILMES
*/
    //AQUI COMEÇA TUDO

// Agrupar informações dos filmes
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Agrupar informações dos filmes
struct Filme 
{
    string nome;
    string categoria;
    float avaliacao;
};

// Sistema para acessar e pesquisar o filme
void pesquisaAcessaFilme(const string& arquivo, const string& nome) 
{
    ifstream file(arquivo);
    
    // Verifica se o arquivo existe e/ou foi aberto corretamente
    if (!file.is_open()) 
    {
        cout << "ERRO 404: Arquivo não encontrado!\n";
        return;
    }
    
    string lerLinha;
    bool filmeEncontrado = false;
    
    while (getline(file, lerLinha)) 
    {
        Filme filme;
        size_t posLinha = lerLinha.find(';');
        
        if (posLinha != string::npos) 
        {
            filme.categoria = lerLinha.substr(0, posLinha);
            lerLinha = lerLinha.substr(posLinha + 1);
           // filme.avaliacao = stof(lerLinha);
            
            if (filme.nome == nome) 
            {
                cout << "Filme encontrado:\n";
                cout << "Título: " << filme.nome << endl;
                cout << "Categoria: " << filme.categoria << endl;
                cout << "Avaliação: " << filme.avaliacao << endl;
                filmeEncontrado = true;
                break;
            }
        }
    }
    
    if (!filmeEncontrado) 
    {
        cout << "Filme não foi encontrado!\n";
    }
    
    file.close();
}

int main() 
{
    string arquivo = "filmes.txt";

    // Exemplo de pesquisa de filme
    string titulo;
    cout << "Digite o título do filme que deseja pesquisar: ";
    getline(cin, titulo);

    pesquisaAcessaFilme(arquivo, titulo);
    
    return 0;
}
