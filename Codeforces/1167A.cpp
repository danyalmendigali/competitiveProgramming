#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
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
    int n;
    string s;
    cin >> n;
    cin >> s;
    int a = 0;

    char target = '8';

    int found = s.find(target);

    if(found == -1)
    {
        cout << "NO" << endl;
        return;
    }
    if(s.sz - found >= 11)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}

signed main() {
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
        solve();




    return 0;
}
