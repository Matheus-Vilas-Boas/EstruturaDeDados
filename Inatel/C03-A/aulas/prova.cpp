#include <iostream>
using namespace std;

struct item
{
	int codigo;
	string nome;
	float preco;
};

int busca_menor(item vetor[], int n, int tamanho){
    int inicio=0, fim = tamanho-1, metade;
	while(inicio <= fim)
	{
	    metade = (inicio+fim)/2;
	    if(vetor[metade].preco == n){
			return metade;
		} 
		else if(vetor[metade].preco > n)
		{
			fim = metade - 1;
		} 
		else 
		{
			inicio = metade + 1;
		}
	}
		
	return n;	
}

void selection_sort(item vetor[], int n)
{
    for (int i = 0; i < n; i++)     
    {
        int j = i;
        int menor =  vetor[i].preco, pos_menor = j, aux;  
        for (int j = i+1; j < n; j++) 
        {
            if (vetor[i].preco < menor)   
            {
                menor = vetor[i].preco; 
                pos_menor = j; 
            }

            aux = vetor[i].preco; 
            vetor[j].preco = menor;
            vetor[pos_menor].preco = aux; 
            
        }
        
    }
    
} 


int main(){
	
	int n;
	cin>>n;
	item itens[n];
	
	for(int i=0;i<n;i++){
		cin>>itens[i].codigo;
		cin>>itens[i].nome;
		cin>>itens[i].preco;
	}
	int o;
	cin>>o;
	
	selection_sort(itens,n);
	
	for(int i=0;i<n;i++){
		cout<<itens[i].nome<<endl;
	}
	
	return 0;
}