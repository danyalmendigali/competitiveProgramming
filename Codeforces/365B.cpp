#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

void solve()
{
       int n; cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       if(n == 1){
              cout << 1 << endl;
              return;
       }

       int mx = 2;
       int curr = 2;
       for(int i = 2; i < n; i++){
              if(a[i] == a[i - 1] + a[i - 2]){
                     curr++;
                     mx = max(mx, curr);
              }
              else{
                     curr = 2;
              }
       }

       cout << mx << endl;



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
