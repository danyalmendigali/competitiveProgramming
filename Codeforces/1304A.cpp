#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>

#define ll long long
#define sz size();
#define S second
#define F first
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll N = 101;
const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;

void solve() {
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    c += d;
    a = b - a;
    if(a % c != 0)  cout << -1 << endl;
    else cout << a / c << endl;
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
