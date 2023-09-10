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
const ll inf = 1e9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;


void solve()
{
    int n , f = 0;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {

        string s = to_string(i);
        int b = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == '0')
            {
                b++;
            }
        }
        if(b == s.size() - 1)
        {
            f++;
        }
    }
    cout << f << endl;
}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();





    return 0;
}
