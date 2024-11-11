#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const ll N = 1e5 + 5;
const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;

int t[4 * N];
int arr[N];

void build(int n, int s, int e) {
    if(s == e) {
        t[n] = arr[s];
    } 
    else {
        int md = (s + e) >> 1;
        build(2 * n + 1, s, md);
        build(2 * n + 2, md + 1, e);
        t[n] = t[n * 2 + 1] + t[n * 2 + 2];
    }
}

int query(int n, int s, int e, int l, int r) {
    if (r < s || e < l) {
        return 0;
    }
    if (l <= s && e <= r) {
        return t[n];
    }
    int md = (s + e) / 2;
    int sm1 = query(2 * n + 1, s, md, l, r);
    int sm2 = query(2 * n + 2, md + 1, e, l, r);
    
    return sm1 + sm2;
}	


void solve()
{
	int n ,m; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	build(0, 0, n - 1);
	
	cin >> m;
	for(int i = 0; i < m; i++){
		int l, r; cin >> l >> r;
		l--; r--;
		cout << query(0, 0, n - 1, l, r) << " ";
	}
	cout << endl;




}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
