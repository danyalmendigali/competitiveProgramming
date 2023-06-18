#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int solve(int x)
{
    int cnt = ((x % 10) - 1) * 10;

    string s = to_string(x);
    cnt += (s.size() * (s.size() + 1) / 2);


    return cnt;
}


int main() {

    int t;
    cin >> t;

    while(t--) {
      int x;
      cin >> x;
      cout << solve(x) << "\n";

    }






  return 0;
}

