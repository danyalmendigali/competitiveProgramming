#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
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

void solve()
{
       int n; cin >> n;
       vector<int> cnt_home(n, 0), cnt_visit(n, 0);
       vector<pair<int, int>> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
              cnt_home[a[i].F]++;
              cnt_visit[a[i].S]++;
       }
       for(int i = 0; i < cnt_home.sz; i++){
              cout << cnt_home[i] << " ";
       }
       cout << endl;



}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
