#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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

map<ll ,ll> mp;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;


    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            cout << s[i];
            if(i % 2 == 1 && i != n - 1)
            {
                cout << '-';
            }
        }
        return ;
    }
    else if(n % 3 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            cout << s[i];
            if(i % 3 == 2 && i != n - 1)
            {
                cout << '-';
            }

        }
        return;
    }
    else
    {
        int i;
        for(i = 0; i < n - n % 2; i++)
        {
            cout << s[i];
            if(i % 2 == 1 && i != n - n % 2 - 1)
            {
                cout << '-';
            }
        }
        cout << s[i];
        return ;
    }
}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
