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

const int MAXN = 1e5 + 5;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       vector<int> freq(MAXN, 0);
       int r = n;
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
              freq[a[i]]++;
              while(freq[r] > 0){
                     cout << r-- << " ";
              }
              cout << endl;
       }

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
