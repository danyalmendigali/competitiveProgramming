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


void solve() {
        ll n;
        cin >> n;
        vector<ll> dp(n);
        for(ll i = 0; i < n; i++){
            cin >> dp[i];
        }
        sort(all(dp));
        ll i;
        for(i = 0; i < n; i++){
            if(dp[i] != i + 1){
                cout << i + 1 << "\n";
                return;
            }
        }
        if(i == n){
            cout << n + 1 << "\n";
        }



}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
