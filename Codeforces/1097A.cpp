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



void solve()
{
    string s;
    cin >> s;
    vector<string> s1(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> s1[i];
    }

    char str1 = s[0];
    char str2 = s[1];
    int a = 0;

    for(int i = 0; i < s1.sz; i++)
    {
        for(int j = 0; j < s1[i].sz; j++)
        {
            char str3 = s1[i][0];
            char str4 = s1[i][1];
            if(str3 == str1 || str4 == str2)
            {
                a++;
            }
        }
    }

    cout << (a > 0 ? "YES" : "NO") << endl;
}

signed main()
{
    optimus_prime;
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
