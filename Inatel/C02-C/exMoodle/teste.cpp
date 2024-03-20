#include <iostream>

using namespace std;

int main () 
{
	int i, q, antigo_valor, novo_valor; // variáveis 
	antigo_valor = 0; // definiu como 0
	novo_valor = 1; // definiu como 1
	cin >> q; // pergunta a repetição
	cout << "0 " << "1 "; // caso q < i , programa finaliza aqui!
	
	for (i = 3; i <= q; i++) 
    {
		cout << (novo_valor + antigo_valor) << " "; // output: soma entre valores, novo e antigo
		antigo_valor = novo_valor; // valor antigo recebe novo valor --> troca troca
	}
		
	return 0;
}