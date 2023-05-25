#include <bits/stdc++.h>
using namespace std;

bool isConcatenation(const string& str) {
     // Регулярное выражение для проверки строк вида "aa", "aaa", "bb" или "bbb"
    regex pattern("^(a{2,3}|b{2,3})+$");
    return regex_match(str, pattern);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
      if(isConcatenation(s)) {
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
    }


    return 0;
}

