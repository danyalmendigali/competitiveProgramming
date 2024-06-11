#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
       int n, m; cin >> n >> m;
       vector<vector<char>> str(n, vector<char>(m));
       vector<int> cnt(n, 0);
       vector<int> cnt2(m, 0);
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cin >> str[i][j];
              }
       }

       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     if(str[i][j] == '*'){
                            cnt[i]++;
                            cnt2[j]++;
                     }
              }
       }
       int mn = n + m - 1;
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     int total = cnt[i] + cnt2[j];
                     //cout << total << " ";
                     if(str[i][j] == '*') total--;
                     //cout << total << " " << (n + m - 1) - total << endl;
                     int change = (n + m - 1) - total;
                     mn = min(mn, change);
              }
       }

       cout << mn << endl;




}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();



       return 0;
}
