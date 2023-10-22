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

set<string> st;
stack<char> st1;
map<string, int> mp, mp20;

void solve()
{
    st.clear();
    int res = 0;
    string s;
    cin >> s;

    st1.push(s[0]);

    for(int i = 1; i < s.sz; i++)
    {
        if(!st.empty() && s[i] == st1.top())
        {
            res++; st1.pop();
        }
        else
        {
            st1.push(s[i]);
        }
    }

    //cout << res << endl;
    if(res % 2 == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

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
