#include <iostream>

using namespace std;

int main() {
    int n, m, A, B;
    cin >> n >> m >> A >> B;

    int time = 0;
    int countA = 0, countB = 0; // Счетчики времени для каждой очереди

    while (n > 0 || m > 0) {
        time++;

        // Учитываем время обслуживания для каждой очереди
        countA++;
        countB++;

        // Проверяем, был ли обслужен человек из первой очереди
        if (countA == A && n > 0) {
            n--;
            countA = 0;
        }

        // Проверяем, был ли обслужен человек из второй очереди
        if (countB == B && m > 0) {
            m--;
            countB = 0;
        }

        // Перемещаем последних людей между очередями при необходимости
        if (n > m && m > 0) {
            n++;
            m--;
        } else if (m >= n && n > 0) {
            m++;
            n--;
        }
    }

    cout << time << endl;

    return 0;
}
