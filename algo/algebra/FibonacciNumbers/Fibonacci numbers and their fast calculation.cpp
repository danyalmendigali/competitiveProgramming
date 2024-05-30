#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll mod = 1e9 + 7;

double binpow(double a, ll b)
{
       if(b == 0) return 1;
       if(b % 2 == 0){
              double c = binpow(a, b / 2);
              return c * c;
       }
       else{
              return binpow(a, b - 1) * a;
       }

}


double fibonacci(ll n)
{
       const double r = sqrt(5);
       const double r2 = (1.0 + r) / 2.0;

       return round(binpow(r2, n) / r);
}




void solve()
{
       ll n; cin >> n;
       cout << fibonacci(n) << endl;


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
