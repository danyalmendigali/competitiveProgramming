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

const ll inf = 1e9 + 9;


pair<int, int> david_place(const vector<int>& b, int pos_d)
{
       int l = 0, r = b.sz - 1;
       int l_teacher = -1, r_teacher = -1;

       while(l <= r){
              int md = l + r >> 1;
              if(b[md] == pos_d){
                     if(md > 0){
                            l_teacher = b[md - 1];
                     }
                     else{
                            l_teacher = -1;
                     }

                     if(md < b.sz - 1){
                            r_teacher = b[md + 1];
                     }
                     else{
                            r_teacher = -1;
                     }

                     return {l_teacher, r_teacher};
              }
              else if(b[md] < pos_d){
                     l_teacher = b[md];
                     l = md + 1;
              }
              else{
                     r_teacher = b[md];
                     r = md - 1;
              }
       }


       return {l_teacher, r_teacher};
}


void solve(){
       int n, m, q; cin >> n >> m >> q;
       vector<int> b(m), a(q);
       for(int i = 0; i < m; i++){
              cin >> b[i];
       }
       sort(all(b));

       for(int i = 0; i < q; i++){
              cin >> a[i];
              int r = lower_bound(all(b), a[i]) - b.begin();
              int l = r - 1;

              if(r == m){
                     cout << (n - a[i]) + (a[i] - b[l]) << endl;
              }
              else if(l == -1){
                     cout << a[i] - 1 + (b[r] - a[i]) << endl;
              }
              else{
                     int dist1 = a[i] - b[l];
                     int dist2 = b[r] - a[i];
                     cout << abs(dist1 - dist2) / 2 + min(dist1, dist2) << endl;
              }
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
