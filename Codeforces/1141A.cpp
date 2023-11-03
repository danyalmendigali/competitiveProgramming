#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

const int N = 3e5 + 5 , M = 1e6 + 5 , inf = 2e9 + 7;
const ll INF = 1e18,  mod = 1e9 + 7 , P = 6547;

using namespace std;

vector<vector<ll>> dp;

void solve()
{
    ll n, m;
    cin >> n >> m;

    int result = -1;

    if (m % n == 0)
    {
      result = 0;
      int d = m / n;
      while (d % 2 == 0)
      {
          d /= 2, result++;
      }
      while (d % 3 == 0)
      {
          d /= 3, result++;
      }
      if (d != 1) result = -1;
    }


    cout << result << endl;
}



signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    solve();






    return 0;
}
