#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve(){
       int n; cin >> n;
       int res = 0;
       vector<vector<char>> a(n, vector<char>(n));
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     cin >> a[i][j];
              }
       }
       char g1, g2, g3, g4;
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     int res1 = 0;
                     g1 = a[i][j];
                     g2 = a[j][n - i - 1];
                     g3 = a[n - j - 1][i];
                     g4 = a[n - i - 1][n - j - 1];
                     if(g1 == '1'){
                            res1++;
                     }
                     if(g2 == '1'){
                            res1++;
                     }
                     if(g3 == '1'){
                            res1++;
                     }
                     if(g4 == '1'){
                            res1++;
                     }
                     res += min(res1, 4 - res1);
              }
       }
       cout << res / 4 << endl;


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
