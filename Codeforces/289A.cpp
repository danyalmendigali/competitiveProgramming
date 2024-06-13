#include <iostream>
#include <string>
#include <vector>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie()

void solve()
{
       int n, k; cin >> n >> k;
       vector<pair<int, int>> a(n);
       ll sum = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
              sum += (a[i].S - a[i].F) + 1;
       }
       int d = 0;
       while(sum % k != 0){
              sum++;
              d++;
       }
       cout << d << endl;



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
