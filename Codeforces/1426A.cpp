#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int FloorNumber(int n, int x)
{
    if(n <= 2) {
        return 1;
    }
    else {
        return ceil((n - 2) / (double)x) + 1;
    }
}



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cin >> t;
    while(t--) {
      int n, x;
      cin >> n >> x;
      cout << FloorNumber (n, x) << endl;
    }








  return 0;
}


