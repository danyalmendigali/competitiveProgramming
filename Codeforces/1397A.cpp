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
#define ins(a) insert(a)

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set<char> st;

void solve()
{
    int n;
    cin >> n;
    string s;
    int sum = 0;
    vector<char> f {};
    for(int i = 0; i < n; i++)
    {
        string h;
        cin >> h;
        sum += h.sz;
        s += h;
    }
    string c = s;
    for(int i = 0; i < s.sz; i++)
    {
        f.pb(s[i]);
    }

    sort(all(f));
    f.erase(unique(all(f)), f.end());


    vector<int> dp;


    unordered_map<char, int> charCount;
    for(char c : s)
    {
        charCount[c]++;
    }

    for(const auto& pair : charCount)
    {
        char symbol = pair.first;
        int count = pair.second;
        dp.pb(count);
    }
    int a = 0;
    for(int i = 0; i < dp.sz; i++)
    {
        if(dp[i] % n == 0)
        {
            a++;
        }
    }


    if(a == dp.sz)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
