#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll N = 1e3 , mod = 1e9 + 9 ;

vector<ll> g[N];
bool used[N];
ll cnt[N];
map<int, int> mp;
vector<int> path;


void dfs(int v){
       if(used[v]){
              cout << v + 1 << " ";
              return;
       }
       used[v] = true;
       for(auto u : g[v]){
              dfs(u);
       }
}

void solve()
{
       int n; cin >> n;
       int a;
       for(int i = 0; i < n; i++){
              cin >> a;
              g[i].pb(a - 1);
       }



      for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     used[j] = 0;
              }
              dfs(i);
      }
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;

}
