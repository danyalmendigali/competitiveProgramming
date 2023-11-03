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
const int day = 7;


ll a[N][N];
ll countA = 0;


void solve()
{
    string s;
    cin >> s;
    ll a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
    for(ll i = 0; i < s.sz; i++)
    {
        if(s[i] == 'B')
        {
            a++;
        }
        if(s[i] == 'u')
        {
            b++;
        }
        if(s[i] == 'l')
        {
            c++;
        }

        if(s[i] == 'b')
        {
            d++;
        }

        if(s[i] == 'a')
        {
            e++;
        }


        if(s[i] == 's')
        {
            f++;
        }


        if(s[i] == 'r')
        {
            g++;
        }
    }

    ll result = min(a, min(b / 2, min(c, min(d, min(e / 2, min(f, g))))));

    cout << result << endl;


}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
