#include <bits/stdc++.h>
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

map<char, int> mp;
set<char> st;


void solve()
{
    mp.clear();
    int n, k; cin >> n >> k;
    string s; cin >> s;
    for(int i = 0; i < s.sz; i++)
    {
        mp[s[i]]++;
    }

    int main_res = 0, r = 0;
    for(int i = 0; i < 26; i++)
    {
        int res1, res2;
        res1 = mp['a' + i];
        res2 = mp['A' + i];

        main_res += min(res1, res2);
        int g , h;
        h = min(res1, res2);
        g = max(res1, res2);

        r += (g - h) / 2;
    }

    main_res += min(r, k);

    cout << main_res << endl;


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
