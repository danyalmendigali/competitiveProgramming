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
    string s;
    cin >> s;
    int cnt = 0;
    if(s[0] != '1')
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        for(int i = 0; i < s.sz; i++)
        {
            if(s[i] == '4') cnt++;
            else if(s[i] != '1')
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cnt = 0;
            }
            if(cnt == 3)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }


}

signed main()
{

    optimus_prime;
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }





    return 0;
}
