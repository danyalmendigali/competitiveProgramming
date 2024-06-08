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
       int n, target; cin >> n >> target;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       int currSum = 0, mx = 0;
       for(int l = 0, r = 0; r < n; r++){
               currSum += a[r];
               while(currSum > target){
                     currSum -= a[l];
                     l++;
               }

               mx = max(mx, r - l + 1);
       }
       cout << mx << endl;


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
