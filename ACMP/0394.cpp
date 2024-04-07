#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0);

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve()
{
    int a, b; cin >> a >> b;
    int g = a / gcd(a, b);
    cout << g << endl;




}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
