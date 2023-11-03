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

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve() {
    string s1, s2;
    ll h1, h2, m1, m2;
    cin >> s1 >> s2;

    h1 =(s1[0] - 48) * 10 + (s1[1] - 48);
    m1 =(s1[3] - 48) * 10 + (s1[4] - 48);
    h2 =(s2[0] - 48) * 10 + (s2[1] - 48);
    m2 =(s2[3] - 48) * 10 + (s2[4] - 48);

    ll k = h2 * 60 + m2;
    k -= h1 * 60 + m1;
    k /= 2;

    cout<< (h1 + (k / 60) + ((k % 60 + m1) / 60)) / 10 <<(h1 + (k / 60) + ((k % 60 + m1) / 60)) % 10 << ":" << ((k % 60 + m1) %60 ) / 10 << ((k % 60 + m1) % 60) % 10;

}


signed main()
{
    optimus_prime;

        solve();




    return 0;
}
