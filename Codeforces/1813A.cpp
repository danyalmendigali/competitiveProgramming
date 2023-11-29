#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}


void solve()
{
    int a, b; cin >> a >> b;
    if(gcd(a, b) == 1){
        cout << 1 << endl;
        cout << a << " " << b << endl;
        return;
    }
    cout << 2 << endl << a - 1 << " " << 1 << endl << a << " " << b << endl;


}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}
