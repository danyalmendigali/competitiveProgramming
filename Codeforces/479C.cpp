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
       vector<pair<int, int>> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;

       }

       sort(all(a));
       int f = 0;
       for(int i = 0; i < n; i++){
              if(f <= a[i].S){
                     f = a[i].S;
              }
              else{
                     f = a[i].F;
              }
       }

       cout << f << endl;
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
