#include <iostream>
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

int n, m;


void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    string ans;
    for(int i = 0; i < n; i++)
    {
        string t;
        t += s[i];
        t += s[i + 1];

        int cnt = 0;
        for(int j = 0; j < n - 1; j++)
        {
            if(t[0] == s[j] && t[1] == s[j + 1]) cnt++;
        }

        if(cnt > maxi) maxi = cnt, ans = t;
    }

    cout << ans << endl;

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
