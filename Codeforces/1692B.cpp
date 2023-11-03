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

set<int> st;
map<string, int> mp, mp20;
map<string, int> mp1, mp2, mp3, mp4;


void solve()
{
    st.clear();
    int size_s; cin >> size_s;
    int s[size_s];
    for(int i = 1; i <= size_s; i++)
    {
        cin >> s[i];
        st.insert(s[i]);
    }

    if((size_s - st.sz) % 2 == 0)
    {
        cout << st.sz << endl;
    }
    else
    {
        cout << st.sz - 1 << endl;
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
