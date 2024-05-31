#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <map>
#include <unordered_set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)

ll countPerm(const string s, const vector<char>& str)
{
       unordered_set<char> se(all(str));
       ll a = 0;
       ll b = 0;
       for(int i = 0; i < s.sz; i++){
              if(se.find(s[i]) != se.end()){
                     b++;
              }
              else{
                     if(b > 0){
                             a += (b * (b + 1)) / 2;
                             b = 0;
                     }
              }
       }

       if(b > 0){
              a += (b * (b + 1)) / 2;
       }

       return a;
}

void solve(){
       ll n, m; cin >> n >> m;
       string s;  cin >> s;
       vector<char> str(m);
       for(int i = 0; i < m; i++){
              cin >> str[i];
       }
       ll res = countPerm(s, str);
       cout << res << endl;
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();




       return 0;
}
