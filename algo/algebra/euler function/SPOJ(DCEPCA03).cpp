#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define ins() insert()
#define ers() erase()

int phi(ll n)
{
       ll res = n;
       for(int i = 2; i * i <= n; i++)
       {
              if(n % i == 0){
                     while(n % i == 0) n /= i;
                     res -= res / i;
              }
       }
       if(n > 1) res -= res / n;
       return res;
}

void solve()
{
       ll res_num = 0;
       ll n; cin >> n;
       for(int i = 1; i <= n; i++){
              for(int j = 1; j <= n; j++){

                  res_num = res_num + phi(i) * phi(j);
              }
       }
       cout << res_num << endl;


}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
