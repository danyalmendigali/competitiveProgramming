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
       int n, k; cin >> n >> k;
       vector<int> a(n);
       map<int, int> mp;

       for(int i = 0; i < n; i++){
              cin >> a[i];
              mp[a[i]]++;
       }


       int siz = 0;
       for(auto i : mp){
              siz++;
       }


       vector<pair<int, int>> pr(siz);
       int ind = 0;
       for(auto i : mp){
              pr[ind].F = i.F;
              pr[ind].S = i.S;
              ind++;
       }


       for(pair<int, int> i : pr){
              cout << "{" << i.F << ", " << i.S << "}" << endl;
       }

       int mx = 0;


       for(int i = 0; i < siz; i++){
              int cnt = 1;
              int sum = pr[i].S;
              for(int j = i; j <= i + k - 1; j++){
                     if(pr[j + 1].F - pr[j].F == 1 && cnt <= k){
                            sum += pr[j].S;
                     }
                     else{
                            mx = max(mx, sum);
                            break;
                     }
              }
       }

       cout << mx << endl;


}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}
