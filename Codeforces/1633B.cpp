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

void solve() {
    string str; cin >> str;
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < str.sz; i++){
        if(str[i] == '0')
        {
            ans1++;
        }
        if(str[i] == '1')
        {
            ans2++;
        }
    }

    if(ans1 == ans2)
    {
        cout << ans1 - 1 << endl;
        return;
    }
    cout << min(ans1, ans2) << endl;

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
