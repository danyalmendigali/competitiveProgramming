#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);

       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       /*

       for(int i = 0; i < n - 1; i++){
              if(a[i] == a[i + 1]){
                            int d = a[n - 2 - i];
                            int d2 = a[n - i];

                            int g1 = a[i - 1];
                            int g2 = a[i + 1];



                            int h = a[i];
                            int h2 = a[n - 1 - i];
                            if(h != d && h != d2){
                                   if(h2 != g1 && h2 != g2){
                                          swap(a[i], a[n - 1 - i]);
                                   }
                            }
              }
       }
       */

       for(int i = 1; i < n / 2; i++){
              if(a[i] == a[i - 1] || a[n - i] == a[n - 1 - i]){
                     swap(a[i], a[n - i - 1]);
              }
       }






       int mn = 0;

       for(int i = 1; i < n; i++){
              if(a[i] == a[i - 1]){
                     mn++;
              }
       }

       cout << mn << endl;

}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
