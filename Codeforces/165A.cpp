#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <numeric>
#include <queue>
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

bool goodPoint(const vector<pair<int, int>>& a, int point)
{
       bool ok = false;
       int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
       int firstNum = a[point].F, secondNum = a[point].S;

       for(int i = 0; i < a.sz; i++){
              if(a[i].F == firstNum && a[i].S > secondNum){
                     ans1 = 1;
              }
              if(a[i].F == firstNum && a[i].S < secondNum){
                     ans2 = 1;
              }
              if(a[i].F > firstNum && a[i].S == secondNum){
                     ans3 = 1;
              }
              if(a[i].F < firstNum && a[i].S == secondNum){
                     ans4 = 1;
              }
       }
       if(ans1 == 1 && ans2 == 1 && ans3 == 1 && ans4 == 1){
              ok = true;
       }


       return ok;
}



void solve()
{
       int n; cin >> n;
       int cnt = 0;
       vector<pair<int, int>> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
       }

       for(int i = 0; i < n; i++){
              if(goodPoint(a, i)){
                     cnt++;
              }
       }
       cout << cnt << endl;


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
