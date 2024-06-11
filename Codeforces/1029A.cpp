#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
       int n, k; cin >> n >> k;
       vector<string> g;
       string s; cin >> s;
       string s1 = "", s2 = "";
       int pos = s.sz - 1;
       for(int i = 0; i < s.sz; i++){
              s1 += s[i];
              s2 += s[pos];
              pos--;
              string h = s2;
              reverse(all(h));
              if(h == s1){
                     g.pb(s1);
              }
       }
       int mx = 0;
       string t;
       for(int i = 0; i < g.sz; i++){
              if(g[i].sz != s.sz && g[i].sz >= mx){
                     mx = g[i].sz;
                     t = g[i];
              }
       }
       cout << t;
       string j = "";
       for(int i = t.sz; i < s.sz; i++){
              j += s[i];
       }
       for(int i = 0; i < k; i++){
              cout << j;
       }
       cout << endl;



}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}
