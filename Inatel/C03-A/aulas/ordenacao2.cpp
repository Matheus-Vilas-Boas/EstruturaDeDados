#include <iostream>
using namespace std;

struct item
{
	int codigo;
	string nome;
	float preco;
};

int busca_menor(item vetor[], int n){
    int inicio=0, fim = n-1, metade;
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
        int menor =  vetor[i].codigo, pos_menor = j, aux;  
        for (int j = i+1; j < n; j++) 
        {
            if (vetor[i].codigo < menor)   
            {
                menor = vetor[i].codigo; 
                pos_menor = j; 
            }

            aux = vetor[i].codigo; 
            vetor[j].codigo = menor;
            vetor[pos_menor].codigo = aux; 
            i--;
        }
        
    }
    
} 


int main(){
	
	int n;
	cin>> n;
	item itens[n];
	
	for(int i=0;i<n;i++){
		cin>>itens[i].codigo;
		cin>>itens[i].nome;
		cin>>itens[i].preco;
	}
	int o;
	cin>> o;
	if(o == 0)
	{
	    selection_sort(itens, n);
	    for(int i=0;i<n;i++){
    		cout<<itens[i].nome<<endl;
    	}
	}
	    
	if(o == 1)
	{
	    busca_menor(itens, n);
	
    	for(int i=0;i<n;i++){
    		cout<<itens[i].nome<<endl;
    	}
	}
	
	return 0;
}