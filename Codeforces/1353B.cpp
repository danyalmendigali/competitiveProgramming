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
#define ins(a) insert(a)
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

ll x[N];
set<ll> st;

void solve()
{
        int n, k, sum = 0;
        cin >> n >> k;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(all(a));
        sort(all(b));

        for(int i = n - 1; i >= 0 && k > 0; i--)
        {
            if(b[i] <= a[n - i - 1]) break;
            else
            {
                sum -= a[n - i - 1] - b[i];
            }
            k--;
        }

        cout << sum << endl;

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
