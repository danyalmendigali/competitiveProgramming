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
       string s1, s2; cin >> s1 >> s2;
       /*
       if(s1 == s2){
              cout << "YES" << endl;
              return;
       }
       if(s1.sz > s2.sz){
              cout << "NO" << endl;
              return;
       }
       */

       int res1 = 0;
       bool ok = false;
       vector<pair<char, int>> a;
       vector<pair<char, int>> b;
       int cnt = 1;
       for(int i = 0; i < s1.sz; i++){
              if(s1[i] == s1[i + 1]){
                     cnt++;
              }
              else{
                     a.push_back({s1[i], cnt});
                     cnt = 1;
              }
       }
       int cnt2 = 1;
       for(int i = 0; i < s2.sz; i++){
              if(s2[i] == s2[i + 1]){
                     cnt2++;
              }
              else{
                     b.push_back({s2[i], cnt2});
                     cnt2 = 1;
              }
       }
       if(a.sz != b.sz){
              cout << "NO" << endl;
              return;
       }
       int f = 0;
       int f2 = 0;
       for(int i = 0; i < max(a.sz, b.sz); i++){
              if(a[i].F == b[i].F && a[i].S <= b[i].S){
                     f++;
              }
       }

       if(f == max(a.sz, b.sz)){
              ok = true;
       }
       if(ok){
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
