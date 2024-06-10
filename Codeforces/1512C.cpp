#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define sz size()

bool isPalindrome(string s) {
    int n = s.sz;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
           int a, b;
           string s;
           cin >> a >> b >> s;
           int n = s.sz;

           for (int i = 0; i < n / 2; ++i) {
               if (s[i] == '?' && s[n - i - 1] != '?') {
                   s[i] = s[n - i - 1];
               } else if (s[i] != '?' && s[n - i - 1] == '?') {
                   s[n - i - 1] = s[i];
               }
           }

           for (char c : s) {
               if (c == '1') {
                   b--;
               } else if (c == '0') {
                   a--;
               }
           }

           if (a < 0 || b < 0) {
               cout << -1 << endl;
               return;
           }

           for (int i = 0; i <= n / 2; ++i) {
               if (s[i] == '?' && s[n - i - 1] == '?') {
                   if (i == n - i - 1) {
                       if (a > 0) {
                           s[i] = '0';
                           a--;
                       } else if (b > 0) {
                           s[i] = '1';
                           b--;
                       }
                   } else {
                       if (a >= 2) {
                           s[i] = s[n - i - 1] = '0';
                           a -= 2;
                       } else if (b >= 2) {
                           s[i] = s[n - i - 1] = '1';
                           b -= 2;
                       }
                   }
               }
           }

           if (a == 0 && b == 0 && isPalindrome(s)) {
               cout << s << endl;
           } else {
               cout << -1 << endl;
           }
}

int main() {
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);

       int t;
       cin >> t;
       while (t--) solve();
       return 0;
}
