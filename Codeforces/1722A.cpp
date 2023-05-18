#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
      int n;
      cin >> n;
      char arr[n];
      for(int i = 0; i < n; i++) {
        cin >> arr[i];
      }

      for(int i = 0; i < n; i++) {
      }

      int a = 0, b = 0, c = 0, d = 0, e = 0;

      for(int i = 0; i < n; i++) {
      if(arr[i] == 'T') {
        a++;
      }
       if(arr[i] == 'i') {
        b++;
      }
       if(arr[i] == 'm') {
        c++;
      }
       if(arr[i] == 'u') {
        d++;
      }
       if(arr[i] == 'r') {
        e++;
          }
      }


      cout << ((a == 1 && b == 1 && c == 1 && d == 1 && e == 1 && n == 5)? "YES" : "NO") << endl;






   }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();

    return 0;
}

