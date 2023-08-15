#include <bits/stdc++.h>
using namespace std;

int main() {
    // Устанавливаем кодировку консоли для корректного вывода
    setlocale(LC_ALL, "Russian");

    int N, M; // N - количество перекрестков, M - количество тоннелей
    cin >> N >> M;

    vector<int> trafficLights(N, 0); // массив, хранящий количество светофоров на каждом перекрестке

    for (int i = 0; i < M; i++) {
        int u, v; // u и v - номера перекрестков, соединенных тоннелем
        cin >> u >> v;
        // Поскольку индексация в массиве начинается с 0, уменьшаем номера перекрестков на 1
        trafficLights[u - 1]++;
        trafficLights[v - 1]++;
    }

    for (int i = 0; i < N; i++) {
        cout << trafficLights[i] << " ";
    }

    return 0;
}
