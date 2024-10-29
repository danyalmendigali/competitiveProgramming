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


const ll INF = 1e10;


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> b = a;

       ll num = 0;
       for(int i = 0; i < n; i++){
              int l = i;
              num = 0;
              for(int j = 0; j < n; j++){
                     if(j != l)
                     {
                            num ^= a[j];
                     }

              }
              if(a[l] == num){
                     cout << a[l] << endl;
                     return;
              }
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
