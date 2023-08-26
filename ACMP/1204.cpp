#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size_matrix;
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix));
    for(int i = 0; i < size_matrix; i++) {
        for(int j = 0; j < size_matrix; j++) {
            cin >> matrix[i][j];
        }
    }

    bool is_oriented = true; // Переменная для хранения информации об ориентированности графа

    for(int i = 0; i < size_matrix; i++) {
        for(int j = 0; j < size_matrix; j++) {
            // Если есть петля (вершица соединена с самой собой) или симметрия не выполнена
            if(matrix[i][i] == 1 || matrix[i][j] != matrix[j][i]) {
                is_oriented = false;
                break;
            }
        }
        if (!is_oriented) {
            break;
        }
    }

    if (is_oriented) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}
