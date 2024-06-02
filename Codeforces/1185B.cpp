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
       if(s1 == s2){
              cout << "YES" << endl;
              return;
       }
       if(s1.sz > s2.sz){
              cout << "NO" << endl;
              return;
       }
       vector<pair<char, vector<int>>> g;
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
