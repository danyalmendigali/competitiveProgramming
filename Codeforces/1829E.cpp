
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int n, m;
vector<vector<int>> grid; // Матрица для хранения данных о водоемах
vector<vector<bool>> visited; // Матрица для отслеживания посещенных ячеек

// Функция обхода в глубину (Depth-First Search)
int dfs(int i, int j) {
    // Проверка на выход за границы матрицы, на нулевые значения и посещенные ячейки
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 || visited[i][j]) {
        return 0;
    }
    visited[i][j] = true; // Помечаем ячейку как посещенную
    int volume = grid[i][j]; // Объем текущего водоема
    volume += dfs(i - 1, j); // Рекурсивный вызов для верхней соседней ячейки
    volume += dfs(i + 1, j); // Рекурсивный вызов для нижней соседней ячейки
    volume += dfs(i, j - 1); // Рекурсивный вызов для левой соседней ячейки
    volume += dfs(i, j + 1); // Рекурсивный вызов для правой соседней ячейки
    return volume; // Возвращаем общий объем водоема
}

// Функция для поиска самого большого водоема
int findLargestLake() {
    int largestLake = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !visited[i][j]) { // Если водоем не посещен и имеет положительный объем
                int volume = dfs(i, j); // Запускаем обход в глубину для текущего водоема
                largestLake = max(largestLake, volume); // Обновляем значение самого большого водоема
            }
        }
    }
    return largestLake; // Возвращаем объем самого большого водоема
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Вводим количество тестовых случаев
    while (t--) {
        cin >> n >> m; // Вводим размеры матрицы
        grid.assign(n, vector<int>(m)); // Инициализируем матрицу размерами n x m
        visited.assign(n, vector<bool>(m, false)); // Инициализируем матрицу посещенных ячеек размерами n x m и значениями false
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        cout << findLargestLake() << endl;
    }

    return 0;
}
