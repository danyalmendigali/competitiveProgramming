#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
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
#define Fast_Code ios::sync_wtih_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];;
       }
       sort(all(a));

       for(int i = 1; i <= n / 2; i++){
              cout << a[i] << " " << a[0] << endl;
       }

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
