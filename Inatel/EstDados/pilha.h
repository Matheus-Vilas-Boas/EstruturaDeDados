//Usando classes
typedef int TipoItem;
const int max_itens = 100;


class pilha
{
    private:
    int tamanho;
    TipoItem* estrutura;


    public:
    pilha(); //Função construtura
    ~pilha(); //Função Destrutora
    bool estaCheia();//Verifica se a pilha está cheia
    bool estaVazia(); // Verifica se a pilha está vazia
    void empilhar(TipoItem); //Empilhamento de um elemento na pil
    TipoItem desempilhar(); //Desempilhamento do primeiro elemento da pilha
    void imprimirPilha(); //Imprime os elementos da Pilha em
    int getTamanho(); //tamanho da pilha


};