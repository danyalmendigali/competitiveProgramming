#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void Mendigali_Daniyal()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }

       if(a.sz == 1){
              cout << 1 << endl;
              return;
       }
       int ok = 1e9;
       int res = 1;
       for(int i = 1; i < a.sz; i++){
              if(a[i - 1] > a[i] && ok != 1){ // 5 4 2 1 0 0 4 |5, 0, 4|
                     res++;
                     ok = 1;
              }

              if(a[i - 1] < a[i] && ok != 0){
                     res++;
                     ok = 0;
              }
       }

       cout << res << endl;



}

signed main()
{
       mendigali;
       int t;
       t = 1;
       cin >> t;
       while(t--) Mendigali_Daniyal();

       return 0;
}
