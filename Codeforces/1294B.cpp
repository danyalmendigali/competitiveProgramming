#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
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
       vector<int> a, b;
       vector<pair<int, int>> pairs(n + 1);
       pairs[0].F = 0;
       pairs[0].F = 0;
       for(int i = 0; i < n; i++){
              cin >> pairs[i].F >> pairs[i].S;
       }

       sort(pairs.begin(), pairs.end());

       for(auto i : pairs){
              a.pb(i.F);
              b.pb(i.S);
       }

       vector<int> a1 = a;
       vector<int> b1 = b;
       sort(all(a));
       sort(all(b));
       if(a != a1 || b != b1){
              cout << "NO" << endl;
              return;
       }
       else{
              cout << "YES" << endl;
              string path = "";
              int g, g2;
              for(int i = 0; i < a.sz - 1; i++){
                     g = a[i + 1] - a[i];
                     g2 = b[i + 1] - b[i];
                     for(int j = 0; j < g; j++){
                            path += 'R';
                     }
                     for(int j = 0; j < g2; j++){
                            path += 'U';
                     }
              }
              cout << path << endl;
              return;

       }


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
