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
	int a, b, c;
	int sum1 = 0, sum2 = 0;
	cin >> a >> b >> c;
	sum1 = a + b + c;
	int a1, b1, c1;
	cin >> a1 >> b1 >> c1;
	sum2 = a1 + b1 + c1;
	int n;
	cin >> n;
	if (((sum2 + 9) / 10) + ((sum1 + 4) / 5) <= n)
    {
        cout << "YES" << endl;
    }
	else
    {
        cout << "NO" << endl;
    }

}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
