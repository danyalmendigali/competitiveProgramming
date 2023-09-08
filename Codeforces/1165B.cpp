#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(a) a.begin() , a.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;

void solve()
{
    ll size_vector;
    cin >> size_vector;
    vector<int> v(size_vector);
    FOR(i, 0, size_vector)
    {
        cin >> v[i];
    }
    sort(all(v));
    ll ans = 0;
    ll now = 1;
    FOR(i, 0, size_vector)
    {
        if(v[i] >= now)
        {
            ans++;
            now++;
        }
    }
    cout << ans << endl;
}

signed main() {
    optimus_prime;

    solve();



    return 0;
}
