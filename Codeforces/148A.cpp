#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve() {



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for(int i = 1; i <= d; i++) {
        if(i % k  == 0 || i % l  == 0 || i % m  == 0 || i % n  == 0) {
            count++;
        }
    }

    cout << count;





   return 0;
}
