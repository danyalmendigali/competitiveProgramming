#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
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

int num(string& s, string& s2, int startPoint, int endPoint)
{
       int ans = 0;
       int k = s2.sz;
       for(int i = startPoint; i <= endPoint - k; i++){
              if(s.compare(i, k, s2) == 0){
                     ans++;
              }
       }


       return ans;
}

void solve()
{
       int n, m, q; cin >> n >> m >> q;
       string s; cin >> s;
       string s2; cin >> s2;

       while(q--){
              int left, right;
              cin >> left >> right;
              left--;
              right--;
              int a = num(s, s2, left, right + 1);
              cout << a << endl;
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
