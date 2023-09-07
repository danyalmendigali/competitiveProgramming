#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L') x--;
        if(s[i] == 'R') x++;
        if(s[i] == 'D') y--;
        if(s[i] == 'U') y++;
        if(x == 1 && y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve();
    }









    return 0;
}
