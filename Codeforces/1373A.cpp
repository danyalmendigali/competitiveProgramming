#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <numeric>
#include <queue>
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


void solve()
{
       ll a, b, c; cin >> a >> b >> c;
       if(a < c){
              cout << 1 << " ";
       }
       else{
              cout << -1 << " ";
       }
       if(c < b * a){
              cout << b << " ";
       }
       else{
              cout << -1 << " ";
       }
       cout << endl;

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
