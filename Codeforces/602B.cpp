#include <iostream>
#include <string>
#include <vector>
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
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void Daniyal_Mendigali()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       int l = 0, r = 0;
       int mx = 0;
       map<int, int> cnt;

       for(int r = 0; r < a.sz; r++){
              cnt[a[r]]++;
              while(cnt.sz > 2 || (cnt.rbegin()->F - cnt.begin()->first) > 1){
                     cnt[a[l]]--;
                     if(cnt[a[l]] == 0){
                            cnt.erase(a[l]);
                     }
                     l++;
              }
              mx = max(mx, r - l + 1);
       }
       cout << mx << endl;


}

signed main()
{
       mendigali;
       int t;
       t = 1;
       //cin >> t;
       while(t--) Daniyal_Mendigali();

       return 0;
}
