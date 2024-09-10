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


const ll N = 1e6 + 5;
const ll INF = 1e18;

vector<int> build_prefix_sums(const vector<int>& a)
{
       int n = a.sz;
       vector<int> prefix_sums(n + 1, 0);
       for(int i = 0; i < n; i++){
              prefix_sums[i + 1] = prefix_sums[i] + a[i];
       }
       return prefix_sums;
}

vector<int> build_prefix_sums2(const vector<int>& a)
{
       int n = a.sz;
       vector<int> prefix_sums(n + 1, 0);
       partial_sum(a.begin(), a.end(), prefix_sums.begin() + 1);

       return prefix_sums;
}


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       a = build_prefix_sums2(a);
       for(int i = 0; i < a.sz; i++){
              cout << a[i] << " ";
       }


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
