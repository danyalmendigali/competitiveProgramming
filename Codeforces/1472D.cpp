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

void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       vector<ll> alice, bob;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              if(a[i] % 2 == 0){
                     alice.pb(a[i]);
              }
              else{
                     bob.pb(a[i]);
              }
       }

       sort(all(alice));
       sort(all(bob));

       bool ok = true;
       ll cnt_alice = 0, cnt_bob = 0;
       while(!alice.empty() || !bob.empty()){
              if(ok){
                     if(!alice.empty() && (bob.empty() || alice[alice.sz - 1] >= bob[bob.sz - 1])){
                            cnt_alice += alice[alice.sz - 1];
                            alice.pop_back();
                     }
                     else if(!bob.empty()){
                            bob.pop_back();
                     }
                      ok = false;
              }
              else{
                     if(!bob.empty() && (alice.empty() || bob[bob.sz - 1] >= alice[alice.sz - 1])){
                            cnt_bob += bob[bob.sz - 1];
                            bob.pop_back();
                     }
                     else if(!alice.empty()){
                            alice.pop_back();
                     }
                     ok = true;
              }

       }

       if(cnt_alice == cnt_bob){
              cout << "Tie" << endl;
              return;
       }
       if(cnt_alice > cnt_bob){
              cout << "Alice" << endl;
              return;
       }
       else{
              cout << "Bob" << endl;
              return;
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
