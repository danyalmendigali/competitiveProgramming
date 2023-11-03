#include <bits/stdc++.h>
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
const int size_dp = 6;


ll countA = 0;

set<int> st;
map<int, int> mp;

void solve()
{
    mp.clear();
    int n = 6;
    vector<int> dp(n + 9);
    pair<ll, ll> p[n + 9];
    for(int i = 1; i <= n; i++)
    {
        cin >> dp[i];
        mp[dp[i]]++;
    }

    int index = 1;
    for(auto i : mp)
    {
        p[index].F = i.F;
        p[index].S = i.S;
        index++;
    }
    int a = 0, b = 0, c = 0, g = 0;;

    for(int i = 1; i <= n; i++)
    {
        if(p[i].F != 0 && p[i].S == 6)
        {
            c++;
        }
        if(p[i].F != 0 && p[i].S == 5)
        {
            g++;
        }
        if(p[i].F != 0 && p[i].S == 4)
        {
            a++;
        }
        if(p[i].F != p[i - 1].F && p[i].S == 2)
        {
            b++;
        }
    }

    if(c == 1)
    {
        cout << "Elephant";
        return;
    }
    if(g == 1){
        cout << "Bear " << endl;
        return;
    }

     if(a == 1 && b == 1)
     {
         cout << "Elephant";
         return;
     }
     else if(a == 1)
     {
         cout << "Bear";
         return;
     }
     if(a == 0)
     {
         cout << "Alien";
         return;
     }


}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
