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
set<char> st;


void solve()
{
    st.clear();
    int r;
    cin >> r;
    string s;
    cin >> s;
    int a = 0;
    vector<int> str;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            str.pb(s[i]);
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            char g = s[i] + ('a' - 'A');
            auto it = find(str.begin(), str.end(), g);
            if(it != str.end())
            {
                 str.erase(it);
            }
            else
            {
                a++;
            }
            /*
            if(!st.count(g))
            {
                a++;
            }
            if(st.count(g))
            {
                st.erase(g);
            }
            */
        }
    }

    cout << a << endl;
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
