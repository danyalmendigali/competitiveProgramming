#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int current_floor = 1;
    int max_floor = 1;
    int min_floor = 1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            current_floor++;
        } else {
            current_floor--;
        }

        max_floor = max(max_floor, current_floor);
        min_floor = min(min_floor, current_floor);
    }

    // Находим общее количество этажей, учитывая разницу между максимальным и минимальным этажом
    cout << (max_floor - min_floor) + 1 << endl;
}

int main() {
    solve();
    return 0;
}
