#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array



void solve() {
    int t;
    cin >> t;
    while(t--) {
        int h, m;
        cin >> h >> m;
        int a, b;
        if(m > 0) {
         h++;
        a = 24 - h;
        b = 60 - m;
        cout << (a * 60) + b << endl;
        }
        if(m == 0) {
            a = 24 - h;
            cout << a * 60 << endl;
        }


    }











}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}



