#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// Armazenar informações básicas do usuário
struct user_data
{
    string name;        // nome
    int registration;   // matricula
    int period;         // periodo
    string course;      // curso
};

// Armazenar informações de uma atividade
struct activity_data
{
    string name;                   // nome da atividade
    map<string, int> metrics;      // métricas da atividade

    // Construtor para inicializar o mapa de métricas
    activity_data(const string& activity_name) : name(activity_name), metrics() {}
};

// Função para exibir o menu de cursos e obter a escolha do usuário
string getCourseChoice()
{
    cout << "Escolha o curso:\n";
    cout << "1 - ET  ";
    cout << "2 - ES  ";
    cout << "3 - EC  ";
    cout << "4 - ECA  ";
    cout << "5 - EL  ";
    cout << "6 - EP  ";
    cout << "7 - EB  ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        return "ET";
    case 2:
        return "ES";
    case 3:
        return "EC";
    case 4:
        return "ECA";
    case 5:
        return "EL";
    case 6:
        return "EP";
    case 7:
        return "EB";
    default:
        return "Desconhecido";
    }
}

// Função para levantar informações do usuário
user_data getUserInfo()
{
    user_data user;

    cout << "Informe seu nome: ";
    //cin.ignore(); // Limpar o buffer de entrada
    getline(cin, user.name);

    cout << "Informe sua matricula: ";
    cin >> user.registration;

    cout << "Informe seu periodo: ";
    cin >> user.period;

    // Chamar a função getCourseChoice para obter a escolha do curso
    user.course = getCourseChoice();

    return user;
}

// Função para mostrar métricas do usuário
void showUserMetrics(const user_data &user)
{
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "Metricas do Usuario:\n";
    cout << "Nome: " << user.name << endl;
    cout << "Curso: " << user.course << endl;
    cout << "Numero de Matricula: " << user.registration << endl;
    cout << "Periodo: " << user.period << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << endl;
}

// Função para mostrar métricas da atividade e armazenar no arquivo
void showMetricsAndStoreToFile(const user_data &user, const activity_data &activity)
{
    string filename = "metrics_" + user.name + "_" + activity.name + ".txt";
    ofstream outputFile(filename);

    if (outputFile.is_open())
    {
        cout << endl;
        outputFile << "Metricas para a atividade: " << activity.name << endl;
        outputFile << "Nome: " << user.name << endl;
        outputFile << "Curso: " << user.course << endl;
        outputFile << "Numero de Matricula: " << user.registration << endl;
        outputFile << "Periodo: " << user.period << endl;

        outputFile << "Habilidades:\n";
        for (const auto &metric : activity.metrics)
        {
            outputFile << metric.first << ": " << metric.second << endl;
        }

        cout << "Metricas da atividade foram salvas em '" << filename << "'." << endl;

        outputFile.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }
}

// Função para mostrar todas as atividades registradas
void showAllActivities(const user_data &user, const vector<activity_data> &activities)
{
    cout << "Atividades Registradas:\n";
    cout << "Nome: " << user.name << endl;
    cout << "Curso: " << user.course << endl;
    cout << "Numero de Matricula: " << user.registration << endl;
    cout << "Periodo: " << user.period << endl;
    cout << endl;

    cout << "Metricas de Todas as Atividades:\n";
    cout << endl;
    for (const auto &activity : activities)
    {
        cout << "Atividade: " << activity.name << endl;

        // Iterar sobre as métricas e exibir cada uma
        for (const auto &metric : activity.metrics)
        {
            cout << metric.first << ": " << metric.second << endl;
        }

        cout << "----------------------\n";
    }
}

// Função para mostrar opções de atividades
void showActivityOptions()
{
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "Escolha uma atividade:\n";
    cout << "1 - Monitoria\n";
    cout << "2 - Iniciacao Cientifica\n";
    cout << "3 - Voluntariado\n";
    cout << "4 - Fetin\n";
    cout << "5 - Estagio\n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=\n";
}
int main()
{
    // Levantar informações do usuário
    user_data user = getUserInfo();

    // Inicializar vetor para armazenar atividades
    vector<activity_data> activities;

    char continuar;
    do
    {
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        cout << "\nMenu:\n";
        cout << "[1] - Adicionar nova atividade\n";
        cout << "[2] - Mostrar todas as metricas e encerrar\n";
        cout << "Escolha a opcao desejada: ";
        cin >> continuar;
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=\n";

        if (continuar == '1')
        {
            showActivityOptions();
            int activityChoice;
            cin >> activityChoice;

            activity_data activity("Indefinida");

            switch (activityChoice)
            {
            case 1:
                activity.name = "Monitoria";
                break;
            case 2:
                activity.name = "IniciacaoCientifica";
                break;
            case 3:
                activity.name = "Voluntariado";
                break;
            case 4:
                activity.name = "Fetin";
                break;
            case 5:
                activity.name = "Estagio";
                break;
            default:
                cout << "Escolha inválida." << endl;
                continue;
            }

            // Definir métricas para a atividade
            activity.metrics["communication"] = 5;
            activity.metrics["adaptabilidade"] = 4;
            activity.metrics["pensamento critico"] = 5;
            activity.metrics["criativdade"] = 4;
            activity.metrics["autonomia"] = 5;
            activity.metrics["lideranca"] = 4;
            activity.metrics["etica"] = 5;
            activity.metrics["empatia"] = 4;
            activity.metrics["responsabilidade"] = 5;
            activity.metrics["inteligencia"] = 4;
            activity.metrics["autogerenciamento"] = 5;

            // Adicionar a atividade ao vetor de atividades
            activities.push_back(activity);

            showMetricsAndStoreToFile(user, activity);
        }
        else if (continuar == '2')
        {
            break; // Encerrar o loop se a opção for 2
        }
        else
        {
            cout << "Opcao invalida. Tente novamente." << endl;
        }

    } while (true);

    // Mostrar todos os resultados ao final
    showAllActivities(user, activities);

    return 0;
}
