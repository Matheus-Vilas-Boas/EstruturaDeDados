# Sistema de Registro de Atividades Acadêmicas 
Este é um programa simples em C++ para registrar atividades acadêmicas de estudantes, armazenar métricas e gerar relatórios. O programa utiliza estruturas de dados para armazenar informações do usuário, atividades e suas respectivas métricas.

## Funcionamento do Programa
### Coleta de Informações do Usuário:

O programa começa solicitando informações básicas do usuário, como nome, matrícula, período e curso.
### Adição de Atividades:

O usuário pode escolher adicionar uma nova atividade a partir de um menu.
O menu inclui opções como "Monitoria," "Iniciação Científica," "Voluntariado," "Fetin," e "Estágio."
As métricas para cada atividade são pré-definidas e armazenadas em um mapa associativo.
### Armazenamento em Arquivo:

As métricas da atividade são salvas em um arquivo de texto com o nome formatado como "metrics_nomeDoUsuario_nomeDaAtividade.txt".
### Visualização de Todas as Métricas:

O usuário pode escolher visualizar todas as métricas registradas até o momento.
As informações do usuário, curso, matrícula, período e métricas de cada atividade são exibidas.
### Encerramento do Programa:

O programa continua executando até que o usuário escolha a opção para mostrar todas as métricas e encerrar.
## Instruções de Execução
### Compilação:

Compile o programa usando um compilador C++. Por exemplo:
Copy code
`g++ -o registro_atividades registro_atividades.cpp`
### Execução:

Execute o programa compilado:
bash
Copy code
`./registro_atividades`
### Interatividade:

Siga as instruções interativas para adicionar atividades, escolher métricas e visualizar resultados.
### Relatórios:

Os resultados das atividades são armazenados em arquivos de texto no formato "metrics_nomeDoUsuario_nomeDaAtividade.txt".
### Observação:

Este é um exemplo educacional e pode ser expandido para incluir mais funcionalidades e aprimoramentos.
Certifique-se de ter um compilador C++ instalado em seu ambiente para executar o programa.
Divirta-se explorando o programa!