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
       int a, b, c; cin >> a >> b >> c;
       int mx = a * b * c;
       for(int i = 0; i <= 5; i++){
              for(int j = 0; j <= 5; j++){
                     for(int k = 0; k <= 5; k++){
                            if(i + j + k == 5){
                                   mx = max(mx, (a + i) * (b + j) * (c + k));
                            }
                     }
              }
       }

       cout << mx << endl;


}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
