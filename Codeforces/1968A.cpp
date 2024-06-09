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
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       int mx = -1;
       int l = 0;
       for(int i = 1; i <= n - 1; i++){
              int gcd = __gcd(n, i);
              if(gcd + i > mx){
                     mx = gcd + i;
                     l = i;
              }
       }
       cout << l << endl;



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
