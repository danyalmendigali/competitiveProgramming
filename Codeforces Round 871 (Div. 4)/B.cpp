#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// Функция решения задачи
void solve() {
    int l;
    cin >> l; // Вводим количество тестовых случаев
    for (int i = 0; i < l; i++) {
        int n;
        cin >> n; // Вводим размер массива
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Вводим элементы массива
        }
        int max_count = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                count++; // Увеличиваем счетчик нулевых элементов
                if (count > max_count) {
                    max_count = count; // Если текущий счетчик больше максимального, обновляем максимальный счетчик
                }
            } else {
                count = 0; // Если текущий элемент не равен нулю, сбрасываем счетчик
            }
        }
        cout << max_count << endl; // Выводим максимальное количество последовательных нулей
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    solve(); // Вызываем функцию решения задачи

    return 0;
}
