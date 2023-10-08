#include <bits/stdc++.h>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<int>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second


using namespace std;

const ll N = 1e5 + 5;
const ll inf = 1e9;
const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;

int x[N];
map<ll, ll> mp , mp2;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        mp[x[i]]++;
    }
    int a = 0;


    for(int i = 1; i <= n; i++)
    {
        if(!mp[i])
        {
            mp2[i]++;
            a++;
        }
    }

    for(const auto& pair : mp2)
    {
        cout << pair.F << " ";
    }

}


signed main(){
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();











    return 0;
}
