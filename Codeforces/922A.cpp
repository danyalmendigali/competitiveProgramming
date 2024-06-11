#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <stack>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int x, y; cin >> x >> y;
       if(y == 0 || (y == 1 && x != 0)){
              cout << "No" << endl;
              return;
       }
       if((y == 1 && x == 0) || (x + 1 >= y && (x - (y - 1)) % 2 == 0)){
              cout << "Yes" << endl;
              return;
       }
       cout << "NO" << endl;



}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
