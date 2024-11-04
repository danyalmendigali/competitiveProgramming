#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve()
{
       int n, m; cin >> n >> m;
       vector<vector<int>> a(n, vector<int>(m, 0));

       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     if(i % 2 == 0){
                            a[i][j] = (j % 2);
                     }
                     else{
                            a[i][j] = (j + 1) % 2;
                     }
              }
       }


       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j     ++){
                     cout << a[i][j] << " ";
              }
              cout << endl;
       }



}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
