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


ll a[N][N];
ll countA = 0;


void solve()
{
    int n;
    cin >> n;

	FOR(i, 0, n) {
		FOR(j, 0, n) {
			cout << (abs(n / 2 - i) + abs(n / 2 - j) <= n / 2 ? "D" : "*");
		}
		cout << "\n";
	}


}

signed main()
{

    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}
