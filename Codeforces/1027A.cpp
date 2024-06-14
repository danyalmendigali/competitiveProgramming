#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve(){
       int n; cin >> n;
       string s; cin >> s;
       int ans = 0;
       set<int> st;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == s[s.sz - i - 1] || (abs(s[i] - s[s.sz - i - 1]) == 2)){
                     ans++;
              }

       }
       if(ans == s.sz){
              cout << "YES" << endl;
              return;
       }
       cout << "NO" << endl;
}



signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
