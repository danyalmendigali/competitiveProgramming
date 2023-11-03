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
    int x;
    cin >> x;

    for (int a = 1; a <= x; a++) {
        for (int b = 1; b <= x; b++) {
            if (a % b == 0 && a * b > x) {
                cout << a << " " << b << endl;
                return;
            }
            if (b % a == 0 && a * b > x) {
                cout << b << " " << a << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
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
