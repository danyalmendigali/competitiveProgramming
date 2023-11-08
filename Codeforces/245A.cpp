
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
    int n; cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    pair<int, int> p[n + 9];
    for(int i = 0; i < n; i++){
        int s;
        cin >> s >> p[i].F >> p[i].S;
        if(s == 1){
            a += p[i].F + p[i].S;
            b += p[i].F;
        }
        if(s == 2){
            c += p[i].F + p[i].S;
            d += p[i].F;
        }
    }

    if(b * 2 >= a){
        cout << "LIVE" << endl;
    }
    if(b * 2 < a){
        cout << "DEAD" << endl;
    }
    if(d * 2 >= c){
        cout << "LIVE" << endl;
    }
    if(d * 2 < c){
        cout << "DEAD" << endl;
    }



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
