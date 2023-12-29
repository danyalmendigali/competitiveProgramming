#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <climits>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

const int MAXN = 100000;
vector<int> a(MAXN);
vector<int> t(4 * MAXN);


void build(int v, int tl, int tr)
{
    if(tl == tr) t[v] = a[tl];
    else{
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}

void update(int v, int tl, int tr, int l, int r, int add)
{
    if(l > r) return;
    if(l == tl && tr == r) t[v] += add;
    else{
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), add);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, add);
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}

int get(int v, int tl, int tr, int l, int r)
{
    if(l > r) return INT_MAX;
    if(l == tl && tr == r) return t[v];
    int tm = (tl + tr) / 2;
    return min(get(v * 2, tl, tm, l, min(r, tm)), get(v * 2 + 1, tm + 1, tr, min(l, tm + 1), r));
}


void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }

    build(1, 0, n - 1);
    update(1, 0, n - 1, 2, 4, 2);
    int minSum = get(1, 0, n - 1, 1, 5);
    cout << minSum << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
