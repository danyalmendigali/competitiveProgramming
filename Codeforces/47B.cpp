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
       vector<int> cnt(3, 0);
       vector<string> t(3);
       string str = "ABC";
       for(int i = 0; i < t.sz; i++){
              cin >> t[i];
              char g = t[i][0];
              char g2 = t[i][2];
              char g3 = t[i][1];

              if(g3 == '>'){
                     cnt[g - 'A']++;
              }
              else{
                     cnt[g2- 'A']++;
              }
       }
       vector<pair<int, char>> money;
       for(int i = 0; i < t.sz; i++){
              money.push_back({cnt[i], str[i]});
       }
       sort(all(money));

       if(money[0].F == money[1].F || money[1].F == money[2].F){
              cout << "Impossible";
              return;
       }
       for(int i = 0; i < t.sz; i++){
              cout << money[i].S;
       }
       cout << endl;
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
