#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
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
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


void solve()
{
       int p, k, n; cin >> p >> n >> k;
       vector<string> name(p);
       vector<int> id(p);
       map<string, int> cnt;


       cin.ignore();
       for(int i = 0; i < p; i++){
              getline(cin, name[i]);
       }

       for(int i = 0; i < p; i++){
              cin >> id[i];
       }

       vector<pair<string, int>> teams;

       for(int i = 0; i < p; i++){
              if(cnt[name[i]] < k){
                     teams.push_back({name[i], id[i]});
                     cnt[name[i]]++;
              }
              if(teams.sz == n) break;
       }

       for(const auto& team : teams){
              cout << team.F << " #" << team.S << endl;
       }

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
