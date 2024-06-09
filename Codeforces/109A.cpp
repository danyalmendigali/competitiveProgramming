
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
       int n; cin >> n;
       string mn1 = "";
       string mn2 = "";
       if(n % 4 == 0){
              for(int i = 0; i < n / 4; i++){
                     mn1 += '4';
              }
       }
       if(n % 7 == 0){
              for(int i = 0; i < n / 7; i++){
                     mn2 += '7';
              }
       }
       for(int i = 0; i < n; i++){
              if((n - (4 * i)) % 7 == 0){
                     for()
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
