#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
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
#define Mendigali_Daniyal ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

void mendigali()
{
       ll n, k; cin >> n >> k;
       if(k >= n){
              cout << 1 << endl;
              return;
       }
       ll mn = n;
       for(ll i = 1; i <= sqrt(n); i++){
              if(n % i == 0){
                     if(i <= k){
                            mn = min(mn, n / i);
                     }
                     if(n / i <= k){
                            mn = min(mn, i);
                     }
              }
       }

       cout << mn << endl;

}

signed main()
{
       Mendigali_Daniyal;
       int t;
       t = 1;
       cin >> t;
       while(t--) mendigali();



       return 0;
}
