#include <iostream>
#include <vector>

using namespace std;

void insertionSortDecrescente(vector<int>& vetor) 
{
    int tam = vetor.size();
    for (int j = 1; j < tam; j++) 
    {
        int chave = vetor[j];
        int i = j - 1;
        while (i >= 0 && vetor[i] < chave) 
        { 
            vetor[i + 1] = vetor[i];
            i--;
        }
        vetor[i + 1] = chave;
    }
}

int main() {
    vector<int> vetor;
    int num;

    while (cin >> num && num != 0) 
    {
        vetor.push_back(num);
    }

    insertionSortDecrescente(vetor); 

    
    for (int i = 0; i < vetor.size(); i++) 
    {
        cout << vetor[i];
        cout << " ";
    }
    cout << endl;

    return 0;
}
