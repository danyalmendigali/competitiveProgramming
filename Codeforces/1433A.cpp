#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int solve(int x)
{
    int cnt = ((x % 10) - 1) * 10;

    string s = to_string(x);
    cnt += (s.size() * (s.size() + 1) / 2);


    return cnt;
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cin >> t;

    while (t--) {
      int x;
      cin >> x;
      cout << solve(x) << "\n";

    }






  return 0;
}

