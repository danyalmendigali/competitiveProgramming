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

set<int> st;

void solve() {
    int res = 0;
    int n;
    cin >> n;
    vector<int> dp1(n), dp2(n);
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        cin >> dp1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> dp2[i];
    }

    for (int i = 0; i < n; i++) {
        ans.push_back(dp1[i] - dp2[i]);
        st.insert(dp1[i] - dp2[i]);
    }

    for (int i = 0; i < ans.size() - 1; i++) {
        if (ans[i] == ans[i + 1]) {
            res++;
        }
    }

    if (res >= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}
