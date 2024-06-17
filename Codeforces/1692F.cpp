#include <iostream>
#include <string>
#include <vector>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       vector<int> mod(10, 0);
       for(int i : a){
              mod[i % 10]++;
       }

       vector<int> res;
       for(int i = 0; i < 10; i++){
              int cnt = min(mod[i], 3);
              while(cnt--){
                     res.pb(i);
              }
       }

       for(int i = 0; i < res.sz; i++){
              for(int j = i + 1; j < res.sz; j++){
                     for(int k = j + 1; k < res.sz; k++){
                            if((res[i] + res[j] + res[k]) % 10 == 3){
                                   cout << "YES" << endl;
                                   return;
                            }
                     }
              }
       }

       cout << "NO" << endl;

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
