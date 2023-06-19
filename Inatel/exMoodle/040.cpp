#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, pixelSize;
    cin >> n >> m >> pixelSize;

    vector<vector<int>> image(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    int area = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (image[i][j] == 1) {
                area += pixelSize * pixelSize;
            }
        }
    }

    cout << "Área da ferida: " << area << " mm2" << endl;

    return 0;
}
