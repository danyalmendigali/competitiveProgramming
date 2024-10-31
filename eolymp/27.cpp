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

const int N = 1e9 + 9;

void solve()
{
       int cnt0 = 0, cnt1 = 0;
       int n; cin >> n;
       for(int i = 0; i < n; i++){
              if(!(n & (1 << i))){
                     cnt0++;
              }
              else{
                     cnt1++;
              }
       }

       string str = "";
       for(int i = 0; i < cnt1; i++){
              str += '1';
       }
       for(int i = 0; i < cnt0; i++){
              str += '0';
       }

       int mx = stoi(str, nullptr, 2);

       cout << mx << endl;



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
