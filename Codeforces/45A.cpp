#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

const string dp[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve() {
    string s;
    cin >> s;

    int k;
    cin >> k;
    int ind;
    for (int i = 0; i < 12; i++) {
        if (s == dp[i]) {
            ind = i;
            break;
        }
    }

    int r = (ind + k) % 12;
    cout << dp[r] << endl;

}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}
