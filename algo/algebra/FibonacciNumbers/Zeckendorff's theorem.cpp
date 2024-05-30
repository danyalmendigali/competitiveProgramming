#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

vector<int> generateFib(int n)
{
       vector<int> fibs = {1, 2};
       int nextFib = fibs[fibs.sz - 1] + fibs[fibs.sz - 2];
       while(nextFib <= n){
              fibs.pb(nextFib);
              nextFib = fibs[fibs.sz - 1] + fibs[fibs.sz - 2];
       }
       return fibs;
}

vector<int> zeckendorf(int n)
{
       vector<int> fibs = generateFib(n);
       vector<int> res;

       for(int i = fibs.sz - 1; i >= 0; i--){
              if(fibs[i] <= n){
                     res.pb(fibs[i]);
                     n -= fibs[i];
              }
       }
       return res;
}


void solve()
{
       int n; cin >> n;
       vector<int> resFib = zeckendorf(n);
       cout << resFib.sz << endl;
       for(int i = 0; i < resFib.sz; i++){
              cout << resFib[i] << " ";
       }

       cout << endl;

}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
