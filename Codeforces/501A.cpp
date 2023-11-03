#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll ans1 = (3 * a) / 10;
    ll ans2 = a - ((a / 250) * c);
    ll ansRes1 = max(ans1, ans2);

    ll ans3 = (3 * b) / 10;
    ll ans4 = b - ((b / 250) * d);
    ll ansRes2 = max(ans3, ans4);

    if(ansRes1 == ansRes2) cout << "Tie" << endl;
    else if(ansRes1 > ansRes2) cout << "Misha" << endl;
    else cout << "Vasya" << endl;

    //cout << ansRes1 << " " << ansRes2 << endl;







}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}

