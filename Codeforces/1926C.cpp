#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ers() erase()
#define ins() insert()
#define lw() lower_bound()
#define up() upper_bound()
#define all(dp) dp.begin(), dp.end()

const ll M = 2e5 + 1;

map<int, int> mp1;

ll sum(ll n)
{
       ll sum = 0;
       while(n > 0)
       {
              sum += (n % 10);
              n /= 10;
       }

       return sum;
}

void vec()
{
       ll s = 0;
       for(ll i = 1; i < M; i++){
              s += sum(i);
              mp1[i] = s;

       }
}


void solve()
{
       ll n; cin >> n;
       cout << mp1[n] << endl;


}


signed main()
{
       vec();
       ios::sync_with_stdio(false);
       cin.tie(0); cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
