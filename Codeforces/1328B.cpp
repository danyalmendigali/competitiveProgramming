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



void solve()
{
       int n, g; cin >> n >> g;
       string s = "";
       for(int i = 0; i < n - 2; i++){
              s += 'a';
       }
       for(int i = 0; i < 2; i++){
              s += 'b';
       }
       for(int i = 0; i < g - 1; i++){
              next_permutation(all(s));
       }
       cout << s << endl;



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
