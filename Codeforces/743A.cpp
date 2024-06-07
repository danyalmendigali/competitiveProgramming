
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
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
       int n, a, b; cin >> n >> a >> b;
       string s; cin >> s;
       if(s[a - 1] == s[b - 1]){
              cout << 0 << endl;
              return;
       }
       cout << 1 << endl;




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
