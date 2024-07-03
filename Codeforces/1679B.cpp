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
       ll n, m; cin >> n >> m;
       vector<size_t> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       map<int, int> update;
       int l = 0;
       size_t sum = 0;
       for(int i = 0; i < a.sz; i++){
              sum += a[i];
              update[i] = a[i];
       }

       while(m--){
              int t; cin >> t;
              if(t == 1){
                     ll l1, l2;
                     cin >> l1 >> l2;
                     if(!update.count(l1 - 1)){
                            update[l1 - 1] = l;
                     }
                     sum -= update[l1 - 1];
                     update[l1 - 1] = l2;
                     sum += update[l1 - 1];
              }
              else{
                     int s; cin >> s;
                     l = s;
                     sum = s * a.sz;
                     update.clear();
              }
              cout << sum << endl;
       }


}

signed main()
{
       mendigali;
       int t;
       t = 1;
       //cin >> t;
       while(t--) Mendigali_Daniyal();

       return 0;
}
