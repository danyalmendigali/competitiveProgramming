#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()

void solve()
{
       ll n; cin >> n;
       while(n > 0){
              if(n % 11 == 0){
                     cout << "YES" << endl;
                     return;
              }
              n -= 111;
       }
       if(n == 0){
              cout << "YES" << endl;
              return;
       }
       cout << "NO" << endl;

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
