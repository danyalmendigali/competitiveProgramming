#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll unsigned long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;
const int N = 1;

void solve()
{
    int n, g = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < s.sz; i++)
    {
        if (s[i] == 'U' && s[i + 1] == 'R' || s[i] == 'R' && s[i + 1] == 'U') {
            s.erase(i, 2);
            s.insert(i, "U");
        }
    }
    cout << s.sz << endl;


}




signed main() {
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
        solve();




    return 0;
}
