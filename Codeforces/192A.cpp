#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <stack>
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
       int n; cin >> n;
       vector<ll> a;
       for(int i = 1; i < 1e3; i++){
              a.pb((i * i + i) / 2);

       }
       for(int i = 0; i < a.sz; i++){
              for(int j = 0; j < a.sz; j++){
                     if(a[i] + a[j] == n){
                            cout << "YES" << endl;
                            return;
                     }
              }
       }
       cout << "NO" << endl;



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
