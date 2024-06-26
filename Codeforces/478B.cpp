#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
       int n; cin >> n;
       if(n % 2 == 0){
              cout << n / 2 << " " << n / 2 << endl;
              return;
       }

       for(int i = 2; i <= sqrt(n); i++){
              if(n % i == 0){
                     cout << n / i << " " << n - (n / i) << endl;
                     return;
              }
       }




       cout << 1 << " " << n - 1 << endl;

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
