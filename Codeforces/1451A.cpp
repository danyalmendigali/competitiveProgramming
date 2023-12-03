#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>

#define ll long long
#define sz size()
#define S second
#define F first
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll N = 101;
const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;

void solve() {
     ll n;
     cin >> n;
     if(n == 1) cout << 0 << endl;
     else if(n == 2) cout << 1 << endl;
     else if(n == 3)cout << 2 << endl;
     else
     {
         if(n % 2 == 0) cout << 2 << endl;
         else cout << 3 << endl;
     }

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
