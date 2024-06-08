
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
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

void solve()
{
       int n, t; cin >> n >> t;
       string s; cin >> s;
       int k = 0, mn = 1e9;
       int g = 0;
       for(int l = 0, r = 0; r < s.sz; r++){
              if(s[r] == 'B'){
                     k++;
              }
              g++;
              while(g > t){
                     if(s[l] == 'B'){
                            k--;
                            l++;
                            g--;
                     }
                     else{
                            l++;
                            g--;
                     }
              }
              mn = min(mn, t - k);
       }

       cout << mn << endl;


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
