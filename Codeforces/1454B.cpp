
#include <bits/stdc++.h>
#include <cmath>

#define truemendigali ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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

map<int ,int> mp;

void solve() {
    mp.clear();
    int n;
    cin >> n;
    pair<int, int> freq[n + 9];
    for(int i = 1; i <= n; i++){
        cin >> freq[i].F;
        mp[freq[i].F]++;
        freq[i].S = i;
    }

    sort(freq + 1, freq + 1 + n);

    for(int i = 1; i <= n; i++)
    {
        if(mp[freq[i].F] == 1)
        {
            cout << freq[i].S << endl;
            return;
        }
    }
    cout << -1 << endl;

}

signed main()
{
    truemendigali;

    ll t;
    t = 1;
    cin >> t;
    while (t--)
         solve();


    return 0;
}
