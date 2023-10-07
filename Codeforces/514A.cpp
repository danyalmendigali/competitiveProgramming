#include <cctype>
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

pair<int, int> p[N];
set <int> st;


void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.sz; i++) {
        int res1 = s[i] - '0';

        if (res1 > 4) {
            res1 = 9 - res1;
            if (res1 == 0 && i == 0)
            {
                continue;
            }
            else
            {
                 s[i] = res1 + '0';
            }
        }
    }


    cout << s << endl;


}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
