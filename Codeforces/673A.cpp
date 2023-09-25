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
    int n, c = 1;
    cin >> n;
    int a[n + 5];
    a[0] = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++)
    {
    	if(a[i] - a[i - 1] > 15)
    	{
    		cout << a[i - 1] + 15 << endl;
    		c = 0;
    		break;
    	}
    }

    if(c) cout << min(a[n] + 15, 90) << endl;



}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
