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

const ll N = 1e6 , inf = 1e9 + 9 , mod = 1e9 + 7;


void solve()
{
       ll n, k; cin >> n >> k;
       vector<ll> a(n);
       map<ll, ll> mp;
       set<int> st;
       int mx = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              st.insert(a[i]);
              mp[a[i]]++;
       }

       vector<int> res;
       for(auto i : st){
              res.pb(i);
       }

       int cnt = 1, sum = mp[res[0]];

       for(int i = 1; i < res.sz; i++){
              mx = max(mx, sum);
              if(res[i] - res[i - 1] >= 2){
                     cnt = 0, sum = 0;
              }

              cnt++;
              if(cnt > k){
                     cnt--;
                     sum -= mp[res[i] - k];
              }

              sum += mp[res[i]];
              mx = max(mx, sum);
       }

       mx = max(mx, sum);
       cout << mx << endl;

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
