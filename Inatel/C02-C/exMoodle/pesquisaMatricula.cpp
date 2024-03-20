#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    string course;
    int matriculation;
};

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].name;
        cin >> students[i].course;
        cin >> students[i].matriculation;
    }

    string nameToFind;
    cin >> nameToFind;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].name == nameToFind) {
            cout << students[i].name << " " << students[i].matriculation << " " << students[i].course << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Aluno nao encontrado" << endl;
    }

    return 0;
}