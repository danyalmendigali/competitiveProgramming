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


ll a[N][N];
ll countA = 0;

void solve()
{
    int num;
    vector<int> dp;
    while (cin >> num){
        if (num != 0){
            dp.pb(num);
        }

        else{
            break;
        }
    }
    int a = 1;
    int mx = 0;
    for (int i = 0; i < dp.sz - 1; i++)
    {
        if (dp[i] < dp[i + 1])
        {
            a++;
        }
        else
        {
            mx = max(mx, a);
            a = 1;
        }
    }
    mx = max(mx, a);
    cout << mx << endl;
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