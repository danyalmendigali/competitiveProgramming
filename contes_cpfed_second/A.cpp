#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int minKurt = min(A * C, B * D); // Находим минимальное количество курта для обмена

    cout << minKurt << endl;





   return 0;
}

