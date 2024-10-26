#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       map<int, int> mp;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              mp[a[i]]++;
       }

       int mx = 0;
       for(auto i : mp){
              mx = max(mx, i.S);
       }


       int res = a.sz - mx;
       if(mx <= res){
              cout << n % 2  << endl;
              return;
       }
       else{
              cout << mx - res << endl;
              return;
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
