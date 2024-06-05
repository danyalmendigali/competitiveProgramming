#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
       map<int, int> mp;
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     for(int k = 0; k < n; k++){
                            if(i != j && i != k){
                                   if(a[i] + a[j] == a[k]){
                                          cout << k + 1 << " " << j + 1 << " " << i + 1 << endl;
                                          return;
                                   }
                            }
                     }
              }
       }
       cout << -1 << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
