#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define F first
#define S second
#define pb(a) push_back(a)
#define sz size()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tin(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

vector<int> res, res2, res3;
vector<bool> used;
set<int> st1, st2;
map<int, int> mp1, mp2;

bool isOllNumber(ll n)
{
    if(n % 2 == 0){
        return true;
    }
    if(n % 2 == 1){
        return false;
    }
}

void solve()
{
    string s; cin >> s;
    ll r = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] % 2 == 0){
            r = 1;
            break;
        }
    }
    ll g = stoi(s);

    if(isOllNumber(g)){
        cout << 0 << endl;
        return;
    }

    if(r == 0){
        cout << -1 << endl;
        return;
    }
    if(s[0] % 2 == 0){
        cout << 1 << endl;
        return;
    }
    else{
        cout << 2 << endl;
        return;
    }



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
