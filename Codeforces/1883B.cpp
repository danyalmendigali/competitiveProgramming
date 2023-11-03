#include <iostream>
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

map<char, int> mp;

void solve()
{
    mp.clear();
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (char c : s) {
        mp[c]++;
    }

    int f = 0;
    for (auto it : mp) {
        if (it.S % 2 != 0) {
            f++;
        }
    }

    if (f <= k && (n % 2 == 0 || k % 2 == 0)){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
    }
}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    cin >> t;

    while(t--)
         solve();



    return 0;
}
