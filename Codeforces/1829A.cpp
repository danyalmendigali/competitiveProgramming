#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve() {
     string s = "codeforces";
     string s1;
     cin >> s1;
     int a = 0;
     FOR(i, 0, 10) {
        if(s[i] != s1[i]) {
            a++;
        }
     }

     cout << a << endl;

}

int main() {
     ios::sync_with_stdio(false);
     cin.tie();

     int t;
     cin >> t;
     while(t--) {
        solve();
     }






   return 0;
}





