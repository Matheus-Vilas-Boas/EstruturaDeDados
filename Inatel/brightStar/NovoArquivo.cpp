#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cstdlib> // Adicione esta linha para usar atof

using namespace std;

// Agrupa informacao dos filmes
struct Filme
{
    string nome;
    string categoria;
    float avaliacao;
};

// Funcao auxiliar para converter uma string para letras minusculas
string toLower(const string& str)
{
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

//Func√£o que acessa o arquivo, procura o filme e envia para main

void pesquisaAcessaFilme(const string& arquivo, const string& titulo, Filme& filmeEncontrado)
{
    ifstream file(arquivo.c_str());
    // Verificar se o arquivo existe ou pode ser aberto
    if (!file.is_open())
    {
        cout << "Erro ao abrir o arquivo.\n";
        return;
    }

    string linha;
    bool encontrado = false;

    // Converter o titulo para letras minusculas
    string tituloLowerCase = toLower(titulo);

    // Procurar o filme
    while (getline(file, linha))
    {
        Filme filme;
        size_t pos = linha.find(';');

        if (pos != string::npos)
        {
            filme.nome = linha.substr(0, pos);
            linha.erase(0, pos + 1);
            pos = linha.find(';');
            filme.categoria = linha.substr(0, pos);
            linha.erase(0, pos + 1);
            filme.avaliacao = atof(linha.c_str()); // Use atof para converter string para float

            // Converter o nome do filme no arquivo para letras minusculas
            string nomeLowerCase = toLower(filme.nome);

            // Mostrando o filme
            if (nomeLowerCase == tituloLowerCase)
            {
                cout << "Filme encontrado:\n";
                cout << "Titulo: " << filme.nome << endl;
                cout << "Categoria: " << filme.categoria << endl;
                cout << "Avaliacao: " << filme.avaliacao << endl;
                filmeEncontrado = filme;
                encontrado = true;
                break;
            }
        }
    }

    if (!encontrado)
    {
        cout << "Filme nao encontrado!\n";
    }

    file.close();
}

// Funcao que recomenda o filme a partir do genero do filme escolhido pelo usuario.
void recomendarFilmes(const vector<Filme>& filmes, const Filme& filmeReferencia)
{
    cout << "Com base no que voce assistiu: " << filmeReferencia.nome << ":\n";
    int count = 0;

    for (vector<Filme>::const_iterator it = filmes.begin(); it != filmes.end(); ++it)
    {
        const Filme& filme = *it;
        {
            if (filme.categoria == filmeReferencia.categoria && toLower(filme.nome) != toLower(filmeReferencia.nome))
            {
                cout << "Titulo: " << filme.nome << endl;
                cout << "Categoria: " << filme.categoria << endl;
                cout << "Avaliacao: " << filme.avaliacao << endl;
                cout << endl;

                count++;
                if (count == 6)
                {
                    break;
                }
            }
        }
    }
}

int main()
{
    cout << "BRIGHTSTAR\n";

    string arquivo = "filmes.txt";

    string titulo;
    vector<Filme> filmes;

    // Ler os filmes do arquivo e armazenar no vetor
    ifstream file(arquivo.c_str());
    if (file.is_open())
    {
        string linha;
        while (getline(file, linha))
        {
            Filme filme;
            size_t pos = linha.find(';');
            if (pos != string::npos)
            {
                filme.nome = linha.substr(0, pos);
                linha.erase(0, pos + 1);
                pos = linha.find(';');
                filme.categoria = linha.substr(0, pos);
                linha.erase(0, pos + 1);
                filme.avaliacao = atof(linha.c_str()); // Use atof para converter string para float

                filmes.push_back(filme);
            }
        }
        file.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo.\n";
        return 0;
    }

    while (true)
    {
        cout << "Digite um filme para assistir (ou 'sair' para encerrar): ";
        getline(cin, titulo);

        if (titulo == "sair")
        {
            cout << "Encerrando o programa...\n";
            break;
        }

        Filme filmeProcurado;
        pesquisaAcessaFilme(arquivo, titulo, filmeProcurado);

        if (filmeProcurado.nome != "")
        {
            string resposta;
            cout << "Deseja ver recomendacoes de filmes similares? (s/n): ";
            getline(cin, resposta);

            if (resposta == "s")
            {
                recomendarFilmes(filmes, filmeProcurado);
            }
        }
    }

††††return†0;
}
