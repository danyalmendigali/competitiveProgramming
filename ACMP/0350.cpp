#include <iostream>
#include <string>

using namespace std;

// Функция для генерации всех перестановок строки
void generate_permutations(string prefix, string remaining) {
    // Если оставшихся символов нет, выводим текущую перестановку
    if (remaining.size() == 0) {
        cout << prefix << endl;
        return;
    }

    // Проходим по каждому символу в remaining
    for (int i = 0; i < remaining.size(); i++) {
        // Добавляем текущий символ к prefix и удаляем его из remaining
        generate_permutations(prefix + remaining[i], remaining.substr(0, i) + remaining.substr(i+1));
    }
}

int main() {
    string s;
    cin >> s;
    generate_permutations("", s);

    return 0;
}
