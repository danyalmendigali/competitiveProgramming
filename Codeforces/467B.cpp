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


const ll INF = 1e9 + 9;

int cnt(int num)
{
       int cnt = 0;
       while(num > 0){
              cnt += (num & 1);
              num /= 2;
       }

       return cnt;
}

void solve()
{
       int n, m, k; cin >> n >> m >> k;
       vector<int> a(m + 1);
       for(int i = 0; i < m + 1; i++){
              cin >> a[i];
       }

       int f = a[m];
       int res = 0;

       for(int i = 0; i < m; i++){
              int db = cnt(a[i] ^ f);
              if(db <= k){
                     res++;
              }
       }

       cout << res << endl;



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
