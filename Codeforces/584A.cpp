#include <iostream>
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
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll countA = 0;

void solve()
{
    int t, n;
    cin >> n >> t;
    if(t == 10&&n == 1)
    {
        cout << "-1";
        return;
    }

    if(t == 10)
    {
        cout << t;
        for(int i = 2; i < n; i++)
        {
            cout << 0;
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    cout << endl;

}

signed main()
{
    int t;
    //cin >> t;
    t = 1;

    while(t--)
        solve();






    return 0;
}
