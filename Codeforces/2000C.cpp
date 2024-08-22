#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const ll N = 1e6 + 5;
const ll INF = 1e18;


void solve()
{
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--) {
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            unordered_map<int, char> p;
            unordered_map<char, int> r;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                if (p.count(a[i])) {
                    if (p[a[i]] != s[i]) {
                        ok = false;
                        break;
                    }
                } else {
                    p[a[i]] = s[i];
                }

                if (r.count(s[i])) {
                    if (r[s[i]] != a[i]) {
                        ok = false;
                        break;
                    }
                } else {
                    r[s[i]] = a[i];
                }
            }

            if(ok){
                     cout << "YES" << endl;
            }
            else{
                     cout << "NO" << endl;
            }
        }


}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
