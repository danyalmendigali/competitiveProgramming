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
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       vector<int> b;
       if(n % 2 == 0){
              for(int i = 0; i < a.sz / 2; i++){
                     b.pb(a[i]);
                     b.pb(a[a.sz - 1 - i]);
              }
              for(int i = 0; i < b.sz; i++){
                    cout << b[i] << " ";
              }
              cout << endl;
              return;
       }
       if(n % 2 == 1){
              for(int i = 0; i < a.sz / 2; i++){
                     b.pb(a[i]);
                     b.pb(a[a.sz - 1 - i]);
              }
              b.pb(a[a.sz / 2]);

              for(int i = 0; i < b.sz; i++){
                    cout << b[i] << " ";
              }
              cout << endl;
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
       //cin >> t;
       while(t--) solve();

       return 0;
}
