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

bool ok;
int a1, a2;
string s1, s2;


ll a[N][N];
ll countA = 0;

string s, k;

void solve()
{
    cin >> s;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] == '0')
        {
            s.erase(s.begin() + i, s.end());
        }
        else
        {
            break;
        }
    }

    for(int i = s.sz - 1; i >= 0; i--)
    {
        if(s[i] == '0')
        {
            s.erase(s.begin() + i, s.end());
        }
        else
        {
            break;
        }
    }

    k = s;

    reverse(all(s));
    if(k == s) cout << "YES" << endl;
    else cout << "NO" << endl;




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
