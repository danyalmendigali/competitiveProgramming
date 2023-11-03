#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
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

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> el;
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(!el.count(x))
        {
            ans.pb(i);
            el.insert(x);
        }
    }

    if(int(ans.size()) < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for(int i = 0; i < k; i++)
        {
            cout << ans[i] + 1 << " ";
        }
        cout << endl;
    }
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
