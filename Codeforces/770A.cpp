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


ll countA = 0;


set<int> st;
map<int, int> mp;
string str = "bcdefghijklmnopqrstuvwxyz";

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    char str_char = 'a';

    for (int i = 0; i < n; i++) {
        s += str_char;
        str_char++;

        if (str_char - 'a' >= k) {
            str_char = 'a';
        }
    }

    cout << s << endl;

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
