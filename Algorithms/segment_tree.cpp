#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>

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
const int MAXN = 100000;

vector<int> a(MAXN);
vector<int> t(4 * MAXN);
vector<int> t1(4 * MAXN)

void build(int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

int query(int v, int tl, int tr, int l, int r) {
    if (l > r){
        return 0;
    }
    if (l == tl && r == tr){
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return query(v * 2, tl, tm, l, min(r, tm)) +
           query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void build1(int v, int tl, int tr) {
    if (tl == tr) {
        t1[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        t1[v] = t1[v * 2] + t1[v * 2 + 1];
    }
}

int query1(int v, int tl, int tr, int l, int r) {
    if (l > r){
        return 0;
    }
    if (l == tl && r == tr){
        return t1[v];
    }
    int tm = (tl + tr) / 2;
    return query(v * 2, tl, tm, l, min(r, tm)) +
           query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void solve() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    build(1, 0, n - 1);

    int a, b;
    cin >> a >> b;
    int result = query(1, 0, n - 1, a, b);

    cout << "Sum from " << a << " to " << b << ": " << result << endl;


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
