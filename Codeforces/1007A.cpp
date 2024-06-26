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

int findNum(vector<int>& a, int k)
{
       auto it = upper_bound(all(a), k);
       if(it != a.end()){
              return distance(a.begin(), it);
       }
       else{
              return -1;
       }
}



void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));

       int ans = 0;
       int p = 0;
       int mn = a[p];
       for(int i = 1; i < a.sz; i++){
              if(a[i] > mn){
                     ans++;
                     p++;
                     mn = a[p];
              }
       }

       cout << ans << endl;

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
