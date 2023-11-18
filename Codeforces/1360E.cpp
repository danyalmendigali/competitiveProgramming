#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

set<int> st;
map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> str(n, vector<char>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> str[i][j];

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (str[i][j] == '1') {
                int res = 0;
                if (str[i + 1][j] == '1') res++;
                if (str[i][j + 1] == '1') res++;
                if (res == 0){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;
}

signed main()
{
    ios;
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}
