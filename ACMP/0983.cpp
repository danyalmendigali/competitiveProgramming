
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;


void solve()
{
    ll n;
    cin >> n;
    ll a, b;
    int mx = 0;
    ll c;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        c = a * b;
        if(c > mx){
            cout << c << endl;
            mx = c;
            continue;
        }
        if(c <= mx){
            cout << mx << endl;
            continue;
        }

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
