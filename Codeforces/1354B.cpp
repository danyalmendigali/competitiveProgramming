#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <map>
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

void solve(){
       string s; cin >> s;
       map<char, int> count;
       int mn = INT_MAX;
       int l = 0;
       for(int i = 0; i < s.sz; i++){
              count[s[i]]++;
              while(count['1'] > 0 && count['2'] > 0 && count['3'] > 0){
                     mn = min(mn, i - l + 1);
                     count[s[l]]--;
                     l++;
              }
       }
       if(mn == INT_MAX){
              cout << 0 << endl;
       }
       else{
              cout << mn << endl;
       }

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
