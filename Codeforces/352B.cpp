#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
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

set<int> st1;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       vector<int> b;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              st1.insert(a[i]);
       }
       vector<int> res;
       for(int i : st1){
              b.pb(i);
              int g = i;
              int pos1 = -1;
              int pos2 = -1;
              for(int j = 0; j < a.sz; j++){
                     if(a[j] == g){
                            if(pos1 == -1){
                                   pos1 = j + 1;
                            }
                            else if(pos2 == -1){
                                   pos2 = j + 1;
                                   break;
                            }
                     }
              }

              if(pos1 != -1 && pos2 != -1){
                     res.pb(abs(pos1 - pos2));
              }
              else{
                     res.pb(0);
              }
       }
       cout << b.sz << endl;
       for(int i = 0; i < b.sz; i++){
              cout << b[i] << " " << res[i] << endl;
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
