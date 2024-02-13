#include <iostream>

using namespace std;

int main(){
    int x, y; // inter gremio
    int op; //opção de saida ou continuidade
    int inter = 0;
    int gremio = 0;
    int grenal = 0;
    int empate = 0;
    
    cin >> x;
    cin >> y;
                
    if(x > y) 
    {
        inter ++;
    }
    if(x < y) 
    {
        gremio ++;
    }
    if(x == y)
    {
        empate++;
    }
    grenal++;
                
    cout << "Novo grenal (1-sim 2-nao)\n";
    cin >> op;
                
    while(op == 1){
                cin >> x;
                cin >> y;
                
                if(x > y) inter ++;
                if(x < y) gremio ++;
                if(x == y) empate++;
                grenal++;
                
                cout << "Novo grenal (1-sim 2-nao)\n";
                cin >> op;
    }
    cout << grenal <<" grenais\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << empate << "\n";
    
    if(inter > gremio) cout << "Inter venceu mais\n";
    if(inter < gremio) cout << "Gremio venceu mais\n";
    if(inter == gremio) cout << "Nao houve vencedor\n";
    
    return 0;
}