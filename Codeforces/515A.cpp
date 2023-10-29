#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

map<int, int> mp;

void solve()
{
    mp.clear();
    ll a, b, s;
    cin >> a >> b >> s;
    ll f = abs(a) + abs(b);
    if(a == 0 && b == 0 && s % 2 == 0){
        cout << "Yes" << endl;
        return;
    }
    if(a == 0 && b == 0 && s % 2 == 1){
        cout << "No" << endl;
        return;
    }
    if(abs(f) > abs(s)){
        cout << "No";
        return;
    }
    if(abs(f) == abs(s)){
        cout << "Yes" << endl;
        return;
    }
    if(abs(f) <  abs(s)){
        ll r = abs(s) - abs(f);
        if(r % 2 == 0)
        {
            cout << "Yes" << endl;
            return;
        }
        if(r % 2 == 1)
        {
            cout << "No" << endl;
            return;
        }
    }

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

