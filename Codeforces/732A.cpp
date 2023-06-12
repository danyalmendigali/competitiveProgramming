#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int k, r;
    int a = 1;

    cin >> k >> r;
    int g = k;

    while (k % 10 != 0 && k % 10 != r) {
        a++;
        k = g * a;
    }

    cout << a << endl;





   return 0;
}
