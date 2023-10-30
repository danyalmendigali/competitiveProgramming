#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define mendigalitrue  cin.tie(0); cout.tie(0)
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


ll countA = 0;
ll a, b;

set<int> st;
map<int, int> mp;

void solve()
{
    mp.clear();
    int a, b, c;
    cin >> a >> b >> c;

    if (b > a + c){
        cout << '-' << endl;
        return;
    }

    if (a > b + c){
        cout << '+' << endl;
        return;
    }

    if (a == b && c == 0){
        cout << '0' << endl;
        return;
    }

    else{
        cout << '?' << endl;
        return;
    }



}

signed main()
{
    mendigalitrue;

    solve();





    return 0;
}
