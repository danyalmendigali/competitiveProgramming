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

const ll N = 1e6 + 5;
const ll INF = 1e18;

bool pl(string s)
{
       bool ok = false;
       int res = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == s[s.sz - 1 - i]){
                     res++;
              }
       }

       if(res == s.sz){
              ok = true;
       }
       return ok;
}

void solve()
{
       int n; cin >> n;
       string str(n, '1');
       string s; cin >> s;
/*
       vector<int> pos;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '0'){
                     pos.pb(i);
              }
       }
       bool ok1 = true; //   палиндром
       bool ok2 = true; //    alice/bob
       int cnt_alice = 0, cnt_bob = 0;
       while(s != str && pos.sz != 0){
              if(ok2 && ok1){
                    s[pos[0]] = '1';
                    pos.erase(pos.begin());
                    cnt_alice++;
                    ok1 = pl(s);
                    ok2 = false;
              }
              if(ok2 && !ok1){
                     reverse(all(s));
                     reverse(all(pos));
                     ok2 = false;
                     ok1 = pl(s);
              }
              if(!ok2 && ok1){
                     s[pos[0]] = '1';
                     pos.erase(pos.begin());
                     cnt_bob++;
                     ok1 = pl(s);
                     ok2 =  true;
              }
              if(!ok2 && !ok1){
                     reverse(all(s));
                     reverse(all(pos));
                     ok2 = true;
                     ok1 = false;
              }
       }

       if(cnt_bob == cnt_alice){
              cout << "DRAW" << endl;
              return;
       }
       if(cnt_bob < cnt_alice){
              cout << "BOB" << endl;
              return;
       }
       else{
              cout << "AIICE";
              return;
       }
       */

       int cnt = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '0'){
                     cnt++;
              }
       }

       if(cnt % 2 == 0){
              cout << "BOB" << endl;
              return;
       }
       if(cnt == 1){
              cout << "BOB" << endl;
              return;
       }
       else{
              cout << "ALICE" << endl;
       }

}





signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
