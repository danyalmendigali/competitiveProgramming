#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

int phi(ll n)
{
    ll res = n;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0) n /= i;
            res -= res / i;

        }
    }
    if(n > 1) res -= res / n;
    return res;
}

void solve()
{
    ll n; cin >> n;
    if(n != 0) cout << phi(n) << endl;
    else return;
    while(n != 0){
        cin >> n;
        if(n == 0) return;
        cout << phi(n) << endl;
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
