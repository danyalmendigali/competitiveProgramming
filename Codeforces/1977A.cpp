#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       int n, m; cin >> n >> m;
       if(n == m){
              cout << "YES" << endl;
              return;
       }
       if(n > m){
              if(abs(m - n) % 2 == 0){
                     cout << "YES" << endl;
                     return;
              }
       }
       cout << "No" << endl;



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
