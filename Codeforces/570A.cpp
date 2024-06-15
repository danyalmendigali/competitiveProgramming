#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

void solve()
{
       int n, m; cin >> n >> m;
       vector<vector<int>> a(m, vector<int>(n));

       for(int i = 0; i < m; i++){
              for(int j = 0; j < n; j++){
                     cin >> a[i][j];
              }
       }

       vector<int> votes(n);

       for(int i = 0; i < m; i++){
              int w = max_element(a[i].begin(), a[i].end()) - a[i].begin();
              votes[w] += 1;
       }

       int mx = 0;
       for(int i = 0; i < votes.sz; i++){
              mx = max(mx, votes[i]);
       }
       for(int i = 0; i < votes.sz; i++){
              if(mx == votes[i]){
                     cout << i + 1 << endl;
                     return;
              }
       }
       cout << 1 << endl;
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
