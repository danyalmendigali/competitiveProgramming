#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       vector<string> a(n);
       map<string, int> mp;
       string ans = "";
       for(int i = 0; i < n; i++){
              cin >> a[i];
              mp[a[i]]++;
       }

       for(int i = 0; i < n; i++){
              string d = a[i];
              string s1 = "";
              string s2 = "";
              int k = 0;
              for(int j = 0; j < d.sz; j++){
                     s1 = d.substr(0, j);
                     s2 = d.substr(j, d.sz);
                     if(mp[s1] >= 1 && mp[s2] >= 1){
                            k++;
                     }
              }
              if(k == 0){
                     ans += '0';
              }
              else{
                     ans += '1';
              }
       }

       cout << ans << endl;

}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
