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

const ll mod = 1e9 + 7;

void solve()
{
       int n; cin >> n;
       set<int> st;

       for(int i = 1; i <= 10; i++){
              for(int mask = 0; mask < (1 << i); mask++){
                     string s = "";
                     for(int k = 0; k < i; k++){
                            if(mask & (1 << k)){
                                   s += '7';
                            }
                            else{
                                   s += '4';
                            }
                     }

                     if(stoll(s) <= 1e9){
                            st.insert(stoll(s));
                     }
              }
       }


       int ind = 1;
       for(auto i : st){
              if(i == n){
                     cout << ind << endl;
                     return;
              }
              else{
                     ind++;
              }
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
