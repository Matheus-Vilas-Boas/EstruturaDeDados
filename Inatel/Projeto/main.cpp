#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Funcionario {
    string nome;
    int identificador;
    string horarioEntrada;
    string horarioSaida;
};

void salvarFuncionario(const Funcionario& empregado, ofstream& arquivo) {
    arquivo << empregado.nome << "," << empregado.identificador << ","
            << empregado.horarioEntrada << "," << empregado.horarioSaida << endl;
}

vector<Funcionario> carregarFuncionarios(ifstream& arquivo) {
    vector<Funcionario> funcionarios;
    string linha;

    while (getline(arquivo, linha)) {
        Funcionario empregado;
        size_t pos = 0;
        string token;
        int campo = 0;

        while ((pos = linha.find(",")) != string::npos) {
            token = linha.substr(0, pos);
            switch (campo) {
                case 0:
                    empregado.nome = token;
                    break;
                case 1:
                    empregado.identificador = stoi(token);
                    break;
                case 2:
                    empregado.horarioEntrada = token;
                    break;
                case 3:
                    empregado.horarioSaida = token;
                    break;
            }
            linha.erase(0, pos + 1);
            campo++;
        }

        funcionarios.push_back(empregado);
    }

    return funcionarios;
}

void listarFuncionarios(const vector<Funcionario>& funcionarios) {
    for (const Funcionario& empregado : funcionarios) {
        cout << "Nome: " << empregado.nome << ", Identificador: " << empregado.identificador
             << ", Horário de Entrada: " << empregado.horarioEntrada
             << ", Horário de Saída: " << empregado.horarioSaida << endl;
    }
}

Funcionario* encontrarFuncionarioPorIdentificador(vector<Funcionario>& funcionarios, int identificador) {
    for (Funcionario& empregado : funcionarios) {
        if (empregado.identificador == identificador) {
            return &empregado;
        }
    }
    return nullptr;
}

int main() {
    vector<Funcionario> funcionarios;

    ifstream arquivoEntrada("funcionarios.txt");
    if (arquivoEntrada.is_open()) {
        funcionarios = carregarFuncionarios(arquivoEntrada);
        arquivoEntrada.close();
    }

    int opcao;

    do {
        cout << "1. Cadastrar funcionário" << endl;
        cout << "2. Listar funcionários" << endl;
        cout << "3. Localizar funcionário" << endl;
        cout << "4. Adicionar mudanças a um funcionário" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                Funcionario empregado;
                cout << "Nome: ";
                cin.ignore();
                getline(cin, empregado.nome);
                cout << "Identificador: ";
                cin >> empregado.identificador;
                cout << "Horário de Entrada: ";
                cin >> empregado.horarioEntrada;
                cout << "Horário de Saída: ";
                cin >> empregado.horarioSaida;
                funcionarios.push_back(empregado);
                break;
            }
            case 2: {
                listarFuncionarios(funcionarios);
                break;
            }
            case 3: {
                int identificador;
                cout << "Informe o identificador do funcionário a ser localizado: ";
                cin >> identificador;
                Funcionario* empregado = encontrarFuncionarioPorIdentificador(funcionarios, identificador);
                if (empregado != nullptr) {
                    cout << "Funcionário encontrado:" << endl;
                    cout << "Nome: " << empregado->nome << ", Identificador: " << empregado->identificador
                         << ", Horário de Entrada: " << empregado->horarioEntrada
                         << ", Horário de Saída: " << empregado->horarioSaida << endl;
                } else {
                    cout << "Funcionário não encontrado." << endl;
                }
                break;
            }
            case 4: {
                int identificador;
                cout << "Informe o identificador do funcionário a ser modificado: ";
                cin >> identificador;
                Funcionario* empregado = encontrarFuncionarioPorIdentificador(funcionarios, identificador);
                if (empregado != nullptr) {
                    cout << "Novo horário de entrada: ";
                    cin >> empregado->horarioEntrada;
                    cout << "Novo horário de saída: ";
                    cin >> empregado->horarioSaida;
                } else {
                    cout << "Funcionário não encontrado." << endl;
                }
                break;
            }
            case 5: {
                ofstream arquivoSaida("funcionarios.txt");
                for (const Funcionario& empregado : funcionarios) {
                    salvarFuncionario(empregado, arquivoSaida);
                }
                arquivoSaida.close();
                break;
            }
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 5);

    return 0;
}
