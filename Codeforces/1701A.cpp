

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
const int INF = 1e9 + 9;
const int mod = 1e5 + 9;
const int square = 360;

map<int, int> mp1;
map<int, int> mp2;
set<int> st;


void solve()
{
    pair<int, int> p[2];
    int res = 0;
    for(int i = 0; i < 2; i++){
        cin >> p[i].F >> p[i].S;
        res += p[i].F;
        res += p[i].S;
    }

    if(res == 4){
        cout << 2 << endl;
        return;
    }
    if(res == 0){
        cout << 0 << endl;
        return;
    }
    else{
        cout << 1 << endl;
        return;
    }



}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}

