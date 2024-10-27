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

ll num(int n, int mask)
{
       string s;
       for(int i = 0; i < n; i++){
              if((mask >> i) & 1){
                     s = "6" + s;
              }
              else{
                     s = "3" + s;
              }
       }
       return stoll(s);
}



void solve()
{
       int n; cin >> n;
       if(n == 1 || n == 3){
              cout << -1 << endl;
              return;
       }

       else{
              if(n % 2 == 0){
                     int cnt6 = 2;
                     int cnt3 = n - 2;
                     string s = "";
                     for(int i = 0; i < cnt3; i++){
                            s += '3';
                     }
                     for(int i = 0; i < cnt6; i++){
                            s += '6';
                     }

                     cout << s << endl;
                     return;
              }
              if(n % 2 == 1){
                     int cnt = n - 4;
                     string str = "";
                     for(int i = 0; i < cnt; i++){
                            str += '3';
                     }
                     str += "6366";

                     cout << str << endl;
                     return;
              }
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
