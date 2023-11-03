#include <bits/stdc++.h>
#include <algorithm>


#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define vll vector<long long>
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

ll n, a = 0, b = 0, mn;

using namespace std;

void solve() {
    cin >> n;
    vll myVector(n);
    FOR(i, 0, n)
    {
        cin >> myVector[i];
        if(myVector[i] % 2 == 0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    mn = min(a, b);


    cout << mn;

}


signed main()
{
    optimus_prime;

        solve();




    return 0;
}
