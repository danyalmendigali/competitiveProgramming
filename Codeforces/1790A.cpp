#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int t;
    cin >> t;

    while(t--) {
        string n;
        cin >> n;

        int correctDigits = 0;
        string pi = "314159265358979323846264338327";

        for(int i = 0; i < n.length(); i++) {
            if(n[i] == pi[i]) {
                correctDigits++;
            }
            else {
                break;
            }
          }
            cout << correctDigits << endl;
        }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();




   return 0;
}
