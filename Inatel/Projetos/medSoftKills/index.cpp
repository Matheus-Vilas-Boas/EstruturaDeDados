#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Armazenar informações básicas do usuário
struct user_data
{
    string name;        // nome
    int registration;   // matricula
    int period;         // periodo
    string course;      // curso
    int communication;  // habilidade de comunicação
    int adaptability;   // adaptabilidade
    int criticalThinking; // pensamento crítico
    int creativity;     // criatividade
    int autonomy;       // autonomia
    int leadership;     // liderança
    int ethics;         // ética
    int empathy;        // empatia
    int responsibility; // responsabilidade
    int intelligence;   // inteligência
    int selfManagement; // autogerenciamento
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

// Função para pedir sobre atividades do usuário
void askActivities(user_data &user)
{
    cout << "Você já participou das seguintes atividades?\n";
    
    cout << "Monitoria (1 para Sim, 0 para Não): ";
    cin >> user.monitoring;

    cout << "Iniciação Científica (1 para Sim, 0 para Não): ";
    cin >> user.sciInitiation;

    cout << "Voluntariado (1 para Sim, 0 para Não): ";
    cin >> user.volunteering;

    cout << "Fetin (1 para Sim, 0 para Não): ";
    cin >> user.fetin;

    cout << "Estágio (1 para Sim, 0 para Não): ";
    cin >> user.internship;
}

// Função para pedir sobre a atividade específica do usuário
void askSpecificActivity(user_data &user)
{
    cout << "Escolha a atividade que você está realizando:\n";
    cout << "1 - Atividade A\n";
    cout << "2 - Atividade B\n";
    cout << "3 - Atividade C\n";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        user.activity = "Atividade A";
        break;
    case 2:
        user.activity = "Atividade B";
        break;
    case 3:
        user.activity = "Atividade C";
        break;
    default:
        user.activity = "Desconhecido";
        break;
    }
}

// Função para exibir as métricas das atividades no arquivo .txt
void showMetrics(const user_data &user)
{
    ofstream outputFile("data.txt");

    if (outputFile.is_open())
    {
        outputFile << "Métricas das Atividades:\n";
        outputFile << "Nome: " << user.name << endl;
        outputFile << "Curso: " << user.course << endl;
        outputFile << "Atividade: " << user.activity << endl;
        outputFile << "Monitoria: " << (user.monitoring ? "Sim" : "Não") << endl;
        outputFile << "Iniciação Científica: " << (user.sciInitiation ? "Sim" : "Não") << endl;
        outputFile << "Voluntariado: " << (user.volunteering ? "Sim" : "Não") << endl;
        outputFile << "Fetin: " << (user.fetin ? "Sim" : "Não") << endl;
        outputFile << "Estágio: " << (user.internship ? "Sim" : "Não") << endl;

        outputFile.close();

        cout << "Métricas das atividades foram salvas em 'metrics.txt'." << endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }
}

// Função principal
int main()
{
    user_data user;

    // Obtendo entrada do usuário
    cout << "Informe seu nome: ";
    cin.ignore();
    getline(cin, user.name);

    cout << "Informe seu número de matrícula: ";
    cin >> user.registration;

    cout << "Informe sua idade: ";
    cin >> user.age;

    cout << "Informe seu período: ";
    cin >> user.period;

    cin.ignore(); // Limpar o caractere de nova linha do buffer

    // Obtendo a escolha do curso do usuário
    user.course = getCourseChoice();

    // Perguntando sobre atividades do usuário
    askActivities(user);

    // Perguntando sobre uma atividade específica do usuário
    askSpecificActivity(user);

    // Abrindo um arquivo para escrita
    ofstream outputFile("infoMain.txt");

    // Verificando se o arquivo foi aberto com sucesso
    if (outputFile.is_open())
    {
        // Escrevendo informações do usuário no arquivo
        outputFile << "Nome: " << user.name << endl;
        outputFile << "Número de Matrícula: " << user.registration << endl;
        outputFile << "Idade: " << user.age << endl;
        outputFile << "Período: " << user.period << endl;
        outputFile << "Curso: " << user.course << endl;

        // Escrevendo informações sobre atividades no arquivo
        outputFile << "Monitoria: " << (user.monitoring ? "Sim" : "Não") << endl;
        outputFile << "Iniciação Científica: " << (user.sciInitiation ? "Sim" : "Não") << endl;
        outputFile << "Voluntariado: " << (user.volunteering ? "Sim" : "Não") << endl;
        outputFile << "Fetin: " << (user.fetin ? "Sim" : "Não") << endl;
        outputFile << "Estágio: " << (user.internship ? "Sim" : "Não") << endl;
        outputFile << "Atividade Específica: " << user.activity << endl;

        // Fechando o arquivo
        outputFile.close();

        cout << "As informações do usuário foram salvas com sucesso em 'infoMain.txt'." << endl;

        // Exibindo métricas das atividades no arquivo .txt
        showMetrics(user);
    }
    else
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }

    return 0;
}


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Armazenar informações básicas do usuário
struct user_data
{
    string name;        // nome
    int registration;   // matricula
    int period;         // periodo
    string course;      // curso
    int communication;  // habilidade de comunicação
    int adaptability;   // adaptabilidade
    int criticalThinking; // pensamento crítico
    int creativity;     // criatividade
    int autonomy;       // autonomia
    int leadership;     // liderança
    int ethics;         // ética
    int empathy;        // empatia
    int responsibility; // responsabilidade
    int intelligence;   // inteligência
    int selfManagement; // autogerenciamento
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
    //cin.ignore();
    getline(cin, user.name);

    cout << "Informe seu número de matrícula: ";
    cin >> user.registration;

    cout << "Informe seu período: ";
    cin >> user.period;

   // Chamar a função getCourseChoice para obter a escolha do curso
    user.course = getCourseChoice();

    return user;
}

// Função para mostrar métricas do usuário
void showUserMetrics(const user_data &user)
{
    cout << "Métricas do Usuário:\n";
    cout << "Nome: " << user.name << endl;
    cout << "Curso: " << user.course << endl;
    cout << "Número de Matrícula: " << user.registration << endl;
    cout << "Período: " << user.period << endl;

    cout << "Habilidades:\n";
    cout << "Comunicação: " << user.communication << endl;
    cout << "Adaptabilidade: " << user.adaptability << endl;
    cout << "Pensamento Crítico: " << user.criticalThinking << endl;
    cout << "Criatividade: " << user.creativity << endl;
    cout << "Autonomia: " << user.autonomy << endl;
    cout << "Liderança: " << user.leadership << endl;
    cout << "Ética: " << user.ethics << endl;
    cout << "Empatia: " << user.empathy << endl;
    cout << "Responsabilidade: " << user.responsibility << endl;
    cout << "Inteligência: " << user.intelligence << endl;
    cout << "Autogerenciamento: " << user.selfManagement << endl;
}

// Função para mostrar métricas das atividades e armazenar no arquivo
void showMetricsAndStoreToFile(const user_data &user, const string &activity)
{
    string filename = "metrics_" + activity + ".txt";
    ofstream outputFile(filename);

    if (outputFile.is_open())
    {
        outputFile << "Métricas para a atividade: " << activity << endl;
        outputFile << "Nome: " << user.name << endl;
        outputFile << "Curso: " << user.course << endl;
        outputFile << "Número de Matrícula: " << user.registration << endl;
        outputFile << "Período: " << user.period << endl;

        outputFile << "Habilidades:\n";
        outputFile << "Comunicação: " << user.communication << endl;
        outputFile << "Adaptabilidade: " << user.adaptability << endl;
        outputFile << "Pensamento Crítico: " << user.criticalThinking << endl;
        outputFile << "Criatividade: " << user.creativity << endl;
        outputFile << "Autonomia: " << user.autonomy << endl;
        outputFile << "Liderança: " << user.leadership << endl;
        outputFile << "Ética: " << user.ethics << endl;
        outputFile << "Empatia: " << user.empathy << endl;
        outputFile << "Responsabilidade: " << user.responsibility << endl;
        outputFile << "Inteligência: " << user.intelligence << endl;
        outputFile << "Autogerenciamento: " << user.selfManagement << endl;

        cout << "Métricas da atividade foram salvas em '" << filename << "'." << endl;

        outputFile.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }
}

// Função principal
int main()
{
    // Levantar informações do usuário
    user_data user = getUserInfo();

    // Perguntar sobre atividades do usuário
    cout << "Você está fazendo ou já fez alguma atividade que desenvolve suas soft skills? (1 para Sim, 0 para Não): ";
    int userResponse;
    cin >> userResponse;

    if (userResponse == 1)
    {
        cout << "Escolha uma atividade:\n";
        cout << "1 - Monitoria\n";
        cout << "2 - Iniciação Científica\n";
        cout << "3 - Voluntariado\n";
        cout << "4 - Fetin\n";
        cout << "5 - Estágio\n";

        int activityChoice;
        cin >> activityChoice;

        switch (activityChoice)
        {
        case 1:
            user.communication = 5;
            user.adaptability = 4;
            user.criticalThinking = 5;
            user.creativity = 4;
            user.autonomy = 5;
            user.leadership = 4;
            user.ethics = 5;
            user.empathy = 4;
            user.responsibility = 5;
            user.intelligence = 4;
            user.selfManagement = 5;

            showMetricsAndStoreToFile(user, "Monitoria");
            break;
        case 2:
            user.communication = 5;
            user.adaptability = 4;
            user.criticalThinking = 5;
            user.creativity = 4;
            user.autonomy = 5;
            user.leadership = 4;
            user.ethics = 5;
            user.empathy = 4;
            user.responsibility = 5;
            user.intelligence = 4;
            user.selfManagement = 5;
            // ...
            showMetricsAndStoreToFile(user, "IniciacaoCientifica");
            break;
        case 3:
            user.communication = 5;
            user.adaptability = 4;
            user.criticalThinking = 5;
            user.creativity = 4;
            user.autonomy = 5;
            user.leadership = 4;
            user.ethics = 5;
            user.empathy = 4;
            user.responsibility = 5;
            user.intelligence = 4;
            user.selfManagement = 5;
            
            // ...
            showMetricsAndStoreToFile(user, "Voluntariado");
            break;
        case 4:
            user.communication = 5;
            user.adaptability = 4;
            user.criticalThinking = 5;
            user.creativity = 4;
            user.autonomy = 5;
            user.leadership = 4;
            user.ethics = 5;
            user.empathy = 4;
            user.responsibility = 5;
            user.intelligence = 4;
            user.selfManagement = 5;
            // ...
            showMetricsAndStoreToFile(user, "Fetin");
            break;
        case 5:
            user.communication = 5;
            user.adaptability = 4;
            user.criticalThinking = 5;
            user.creativity = 4;
            user.autonomy = 5;
            user.leadership = 4;
            user.ethics = 5;
            user.empathy = 4;
            user.responsibility = 5;
            user.intelligence = 4;
            user.selfManagement = 5;
            // ...
            showMetricsAndStoreToFile(user, "Estagio");
            break;
        default:
            cout << "Escolha inválida." << endl;
            break;
        }
    }

    // Mostrar métricas do usuário
    showUserMetrics(user);

    return 0;
}
