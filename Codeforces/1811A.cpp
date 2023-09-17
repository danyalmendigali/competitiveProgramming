#include <bits/stdc++.h>
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


ll a[N][N];
ll countA = 0;

void solve()
{
    int a, a1;
    cin >> a >> a1;
    string s;
    cin >> s;

    for(int i = 0; i < a; i++)
    {
        if(s[i] - '0' >= a1)
        {
            cout << s[i];
        }
        else
        {
            cout << a1;
            for(int j = i; j < a; j++)
            {
                cout << s[j];
            }
            cout << "\n";
            return;
        }
    }

    cout << a1 << "\n";

}

signed main()
{

    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while(t--)
         solve();



    return 0;}
