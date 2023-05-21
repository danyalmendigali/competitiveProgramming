#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
        int t;
        cin >> t;
        while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int closingParentheses = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')')
                closingParentheses++;
            else
                break;
        }

        if(closingParentheses > s.size() - closingParentheses) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

      }




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
       solve();




   return 0;
}

