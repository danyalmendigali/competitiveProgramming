#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve()
{
       ll n; cin >> n;
       int sum = 0;
       int g = 0;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       for(int i = 0; i < n; i++){
              if(a[i] >= g){
                     g += a[i];
                     sum++;
              }
       }
       cout << sum << endl;






}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
