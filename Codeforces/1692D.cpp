
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

set <string> st;
map<string, int> mp;
map<string, int> mp2;

bool isPalindrome(const string& s) {
    return s[0] == s[4] && s[1] == s[3];
}

int countPalindromes(const string& s, int x) {
    int res = 0;

    for (int h = 0; h < 24; ++h) {
        for (int m = 0; m < 60; ++m) {
            string time = (h < 10 ? "0" : "") + to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m);

            if (isPalindrome(time)) {
                int minutes = h * 60 + m;
                int diff = (minutes - stoi(s.substr(0, 2)) * 60 - stoi(s.substr(3))) % x;

                if (diff == 0 || diff == x) {
                    ++res;
                }
            }
        }
    }

    return res;
}

void solve()
{
        string s; cin >> s;
        int x; cin >> x;
        int result = countPalindromes(s, x);
        cout << result << endl;
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
