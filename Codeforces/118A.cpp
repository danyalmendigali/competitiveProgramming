#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    string s;
    cin >> s;

    string result = "";
    for (char c : s) {
        char lowercaseChar = tolower(c);
        if (lowercaseChar == 'a' || lowercaseChar == 'o' || lowercaseChar == 'y' ||
            lowercaseChar == 'e' || lowercaseChar == 'u' || lowercaseChar == 'i') {
            continue; // Пропускаем гласные буквы
        }

        result += '.';
        result += lowercaseChar;
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
