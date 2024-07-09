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
       ll n; cin >> n;
       vector<ll> a(n);
       vector<int> odd, even;
       for(int i = 1; i <= n; i++){
              if(i % 2 == 0){
                     even.pb(i);
              }
              else{
                     odd.pb(i);
              }
       }
       if(n == 1){
              cout << 1 << endl;
              return;
       }
       if(n < 4){
              cout << "NO SOLUTION" << endl;
              return;
       }

       for(int i = 0; i < even.sz; i++){
              cout << even[i] << " ";
       }
       for(int i = 0; i < odd.sz; i++){
              cout << odd[i] << " ";
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
