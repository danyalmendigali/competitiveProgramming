
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

string s;

void solve()
{
    string s;
    cin >> s;

    int pos1 = 0, pos2 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
            pos1 = i;

        if(s[i] == '3')
            pos2 = i;
    }

    if(pos1 < pos2)
    {
        cout << 13 << endl;
        return;
    }
    else
    {
        cout << 31 << endl;
        return;
    }
    cout << -1 << endl;

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
