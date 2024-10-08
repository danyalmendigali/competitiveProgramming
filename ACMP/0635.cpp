#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
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
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


void solve()
{
       int n, m; cin >> n >> m;
       vector<pair<int, pair<int, int>>> pr1(n), pr2(m);
       map<int, int> mp1, mp2;

       vector<int> res1, res2;
       int mx = 0;
       int k = 0;
       for(int i = 0; i < n; i++){
              cin >> pr1[i].F >> pr1[i].S.F >> pr1[i].S.S;
              mx = max(mx, pr1[i].S.F);
              if(pr1[i].S.F >= 1){
                     k++;
              }
              mp1[pr1[i].F] = pr1[i].S.F;
              res1.pb(pr1[i].S.F);
       }
       set<int> st;

       for(int i = 0; i < m; i++){
              cin >> pr2[i].F >> pr2[i].S.F >> pr2[i].S.S;
              if(pr2[i].S.F != 0){
                   st.insert(pr2[i].F);
              }
              mp2[pr2[i].F] = pr2[i].S.F;
       }


       sort(all(res1));

       int mediana = res1[(k + 1) / 2];

       for(auto i : mp1){
              if(i.S > mediana){
                     st.insert(i.F);
              }
              if(i.S == mx && i.S != 0){
                     st.insert(i.F);
              }
       }
       cout << st.sz << endl;
       for(int i : st){
              cout << i << " ";
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
