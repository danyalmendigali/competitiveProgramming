#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define Mendigali ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

set<int> st;
map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve() {
    int a, b; cin >> a >> b;
    vector<int> dp(a);
    vector<int> mx;
    for(int i = 0; i < a; i++){
        cin >> dp[i];
        if(dp[i] == 1){
            mx.pb(i);
        }
    }

    pair<int, int> p[b + 9];
    for(int i = 0; i < b; i++){
        cin >> p[i].F >> p[i].S;
        if(p[i].F == 1){
            p[i].S--;
            dp[p[i].S] = 1 - dp[p[i].S];
            if(dp[p[i].S] == 1){
                mx.pb(p[i].S);
            }
            else{
                mx.pop_back();
            }
        }
        else if(p[i].F == 2){
            if(p[i].S <= mx.sz){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }

}

signed main()
{
    Mendigali;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}
