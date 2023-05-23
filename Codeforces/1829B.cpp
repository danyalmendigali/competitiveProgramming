#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
#define FOR(i, a, b)  for(int i = a; i < b; i++)


// Функция решения задачи
void solve() {
    int l;
    cin >> l; // Вводим количество тестовых случаев
     FOR(i, 0, l) {
        int n;
        cin >> n; // Вводим размер массива
        int arr[n];
        FOR(i, 0, n) {
            cin >> arr[i]; // Вводим элементы массива
        }

        int max_count = 0;
        int count = 0;
        FOR(i, 0, n) {
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

