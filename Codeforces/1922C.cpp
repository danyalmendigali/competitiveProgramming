#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

void solve()
{
       int n; cin >> n;
       int s = 0, s2 = 0;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       // 1 4 6 10 14 45

       int t, loc1, loc2; cin >> t;
       while(t--){
              cin >> loc1 >> loc2;
              loc1--; loc2--;
              s = abs(a[loc1] - a[loc2]);
              if(loc1 < loc2){
                     for(int i = loc1; i <= loc2; i++){
                            if(i == 0){
                                 s2 += min(1, abs(a[0] - a[1]));
                                 i++;
                            }
                            int f1 = abs(a[i] - a[i - 1]); // заднее число
                            int f2 = abs(a[i] - a[i + 1]); // переднее число
                            if(f1 > f2){
                                   s2++;
                                   i++;
                            }
                            else{
                                   s2 += abs(a[i] - a[i + 1]);
                                   i++;
                            }
                     }
              }
              cout << min(s, s2) << endl;

       }



}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
