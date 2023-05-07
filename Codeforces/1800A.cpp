#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isCatSound(string s) {
    int n = s.length();
    int i = 0;


    while (i < n && (s[i] == 'm' || s[i] == 'M')) {
        i++;
    }
    if (i == 0) {
        return false;
    }


    while (i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
    }
    if (i == 1) {
        return false;
    }


    while (i < n && (s[i] == 'o' || s[i] == 'O')) {
        i++;
    }
    if (i == 2) {
        return false;
    }


    while (i < n && (s[i] == 'w' || s[i] == 'W')) {
        i++;
    }
    if (i != n) {
        return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isCatSound(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
