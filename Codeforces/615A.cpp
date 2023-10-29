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

map<int, int> mp;
set<int> st;

void solve()
{
    st.clear();
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        for(int j = 0; j < a; j++){
            int g;
            cin >> g;
            st.insert(g);
        }
    }


    if(st.sz == m){
        cout << "YES";
        return;
    }

    cout << "NO";

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

