#include <cctype>
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

pair<int, int> p[N];
set <int> st;

void solve()
{
    vector<int> dp(6);
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
        cin >> dp[i];
        sum += dp[i];
    }

    int avarege;

    if(sum % 2 == 0)
    {
        avarege = sum / 2;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }

    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++) {
            for(int k = j + 1; k < 6; k++){
                if(dp[i] + dp[j] + dp[k] == avarege)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;







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
