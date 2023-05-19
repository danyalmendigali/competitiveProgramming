
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array



string solve(const string& s) {

    int n = s.size();
    if(n == 1 || n % 2 != 0) {
        return "NO";
    }
    bool isSquare = true;
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[i + n / 2]) {
            isSquare = false;
            break;
        }
    }
    return isSquare? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}



