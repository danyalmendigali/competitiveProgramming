#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

string findMinimalWord(int n) {
      for (char i = 'a'; i <= 'z'; ++i) {
          for (char j = 'a'; j <= 'z'; ++j) {
              int remaining = n - (i - 'a' + 1) - (j - 'a' + 1);
              if (remaining >= 1 && remaining <= 26) {
                  char k = 'a' + remaining - 1;
                  return {i, j, k};
              }
          }
      }


      return "zzz";
}

void solve()
{
       int n; cin >> n;
       cout << findMinimalWord(n) << endl;



}

signed main()
{
        Fast_Code;
        int t;
        t = 1;
        cin >> t;
        while(t--) solve();


       return 0;
}
