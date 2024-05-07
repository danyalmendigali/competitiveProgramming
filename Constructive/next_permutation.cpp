#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <numeric>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define ins() insert()
#define ers(a) erase();
#define fori(i, n) for(int i = 0; i < n; i++)
#define inf 1e18

void solve()
{
       int n = 4;
       vector<int> a(n);
       iota(all(a), 1); // a = [1, 2, 3, ..., n];
       for(auto& i : a){
              cout << i << " ";
       }
       cout << endl;
       while(next_permutation(all(a))){
              for(int i = 0; i < a.sz; i++){
                     cout << a[i] << " ";
              }
              cout << endl;
       }

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
