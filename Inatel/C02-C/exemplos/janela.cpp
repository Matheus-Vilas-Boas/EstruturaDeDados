#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    // Criação da aplicação Qt
    QApplication app(argc, argv);

    // Criação da janela
    QLabel label("Hello, World!");
    label.show();

    // Execução da aplicação Qt
    return app.exec();
}