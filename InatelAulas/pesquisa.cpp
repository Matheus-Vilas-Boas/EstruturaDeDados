#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> X(N);
    vector<int> Y(N);
    vector<char> Op(N);
    vector<double> Z(N);
    
    // Leitura dos vetores X, Y e Op
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> Y[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> Op[i];
    }
    
    // Operações e cálculo dos resultados
    for (int i = 0; i < N; i++) {
        switch (Op[i]) {
            case '+':
                Z[i] = X[i] + Y[i];
                break;
            case '-':
                Z[i] = X[i] - Y[i];
                break;
            case '*':
                Z[i] = X[i] * Y[i];
                break;
            case '/':
                Z[i] = static_cast<double>(X[i]) / Y[i];
                break;
        }
    }
    
    // Exibição dos resultados
    cout << fixed << setprecision(2);
    for (int i = 0; i < N; i++) {
        cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << Z[i] << endl;
    }
    
    return 0;
}

int teste() {
    int N;
    cin >> N;
    
    vector<int> X(N);
    vector<int> Y(N);
    vector<char> Op(N);
    vector<double> Z(N);
    int i;
    // Leitura dos vetores X, Y e Op
    for (i = 0; i < N; i++) {
        cin >> X[i];
        cin >> Y[i];
        cin >> Op[i];
    }
    
    // Operações e cálculo dos resultados
    for (int i = 0; i < N; i++) {
        if (Op[i] == '+') {
            Z[i] = X[i] + Y[i];
        } else if (Op[i] == '-') {
            Z[i] = X[i] - Y[i];
        } else if (Op[i] == '*') {
            Z[i] = X[i] * Y[i];
        } else if (Op[i] == '/') {
            Z[i] = static_cast<double>(X[i]) / Y[i];
        }
    }
    
    // Exibição dos resultados
    cout << fixed << setprecision(2);
    for (int i = 0; i < N; i++) {
        cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << Z[i] << endl;
    }
    
    return 0;
}