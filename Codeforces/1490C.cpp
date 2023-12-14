#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using namespace std;


void solve()
{
        ll x;
        cin >> x;
        while (x % 4 == 0) {
            x /= 4;
        }
        if(x % 8 == 7){
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;

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
