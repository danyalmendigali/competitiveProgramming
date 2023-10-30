#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string pincode;
        cin >> pincode;

        int total_seconds = 0;
        int current_digit = 1; // Начинаем с цифры 1

        for (char c : pincode) {
            int target_digit = c - '0';

            // Рассчитываем разницу между текущей цифрой и целевой цифрой
            int diff = abs(target_digit - current_digit);

            // Минимальное количество секунд для перемещения к целевой цифре
            total_seconds += min(diff, 10 - diff);

            // Устанавливаем текущую цифру в целевую
            current_digit = target_digit;
        }

        cout << total_seconds << endl;
    }

    return 0;
}
