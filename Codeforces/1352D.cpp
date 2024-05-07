#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ers() erase()
#define ins() insert()
#define lw() lower_bound()
#define up() upper_bound()
#define all(dp) dp.begin(), dp.end()



void solve()
{
       int n; cin >> n;
       int res = 0;
       int sum1 = 0, sum2 = 0;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       int h = 0;
       int g = a[0];
       sum1 += a[0];
       h++;
       g++;
       res++;
       int s, s1;
       a.erase(a.begin());
       while(!a.empty()){
              if(h % 2 == 1){
                     int s = 0;
                     while(!a.empty() && s < g){
                            s += a.back();
                            sum2 += a.back();
                            a.pop_back();
                     }
                     h++;
                     g++;
                     res++;
              }
              else{
                     int s1 = 0;
                     while(!a.empty() && s1 < g){
                            s1 += a.front();
                            sum1 += a.front();
                            a.erase(a.begin());
                     }
                     h++;
                     g++;
                     res++;
              }
       }
       if(!a.empty()) res++;
       cout << res << " " << sum1 << " " << sum2 << endl;

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
