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

map<string, int> mp;
set<int> st;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> p(m);

    for (int i = 0; i < m; i++) {
        cin >> p[i].F >> p[i].S;
    }

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    string new_s = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i] == p[j].F){
                if(p[j].F.sz <= p[j].S.sz){
                    new_s += p[j].F + " ";
                }
                else{
                    new_s += p[j].S + " ";
                }
            }
            if (s[i] == p[j].S){
                if(p[j].F.sz >= p[j].S.sz){
                    new_s += p[j].S + " ";
                }
                else{
                    new_s += p[j].F + " ";
                }
            }
        }
    }


    cout << new_s << endl;
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
