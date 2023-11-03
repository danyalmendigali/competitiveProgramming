#include <bits/stdc++.h>
#include <algorithm>


#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second


using namespace std;

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

string s1, s2;

void solve()
{
    cin >> s1 >> s2;

    if(s1 == s2)
    {
        cout << "YES" << "\n";
        return;
    }

    int n = s1.size();
    int ok = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(s1[i] == '0' && s2[i] == '0' && s1[i + 1] == '1' && s2[i + 1] == '1') ok = 1;

    }
    if(ok)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";


}


signed main()
{
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
