#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define F first
#define S second
#define sz size()
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)

void solve()
{
       int n; cin >> n;
       vector<int> a(3);
       int d = 0;
       for(int i = 0; i < 3; i++){
              cin >> a[i];
       }
       int k = a[n - 1];
       set<int> st;
       if( k == 1 || k == 2 || k == 3)
       {
              int r = a[k - 1];
              if(r == 1 || r == 2 || r == 3)
              {
                     int l = a[r - 1];
                     if(r == 1 || r == 3 || r == 2){
                            cout << "YES" << endl;
                            return;
                     }
              }
       }
       cout << "NO" << endl;


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
