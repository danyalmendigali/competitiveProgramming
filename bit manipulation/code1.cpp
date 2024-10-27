#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;



void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int mask = 0; mask < (1 << n); mask++){
              for(int i = 0; i < n; i++){
                     if(mask & (1 << i)){
                            cout << i + 1 << " ";
                     }
              }
              cout << endl;
       }



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}
