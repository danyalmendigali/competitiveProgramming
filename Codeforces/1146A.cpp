#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    string s;
    cin >> s;
    int a = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a') {
            a++;
        }
    }

    if(a > s.size() - a){
        cout << s.size() << endl;
    }
    int b, c;
    if(a <= s.size() - a) {
        b = a--;
        cout << a + b;

    }


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}
