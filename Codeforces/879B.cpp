#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

bool isGoodQueue(vector<ll>& a, ll d)
{
       bool ok = false;
       int first = a[0];
       int h = 0;
       for(int i = 1; i < a.sz; i++){
              if(first > a[i]){
                 h++;
              }
              if(d == h){
                     ok = true;
                     i = a.sz - 1;
              }
       }
       return ok;
}


void solve(){
       ll n, k; cin >> n >> k;
       vector<ll> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }

       int index = 0;
       ll cnt = 0;
       for(int i = 1; i < n; i++){
              if(a[index] > a[i]){
                     cnt++;
                     if(cnt == k){
                            break;
                     }
              }
              else{
                     index = i;
                     cnt = 1;
              }
       }
       cout << a[index] << endl;



       /*
       auto it = a.begin() + 1;
       a.pb(*it);
       a.erase(a.begin() + 1);
       for(int i : a){
              cout << i << " ";
       }
       cout << endl;

       bool ok = isGoodQueue(a, k);
       if(ok){
              cout << a[0] << endl;
              return;
       }
       else{
              for(int i = 0; i < a.sz - 1; i++){
                     if(a[i] > a[i + 1]){
                            auto it = a.begin() + i;
                            a.pb(*it);
                            a.erase(a.begin() + i);
                            for(int j : a){
                                   cout << j << " ";
                            }
                            cout << endl;
                     }
                     if(isGoodQueue(a, k)){
                            cout << a[0] << " ";
                            return;
                     }
              }

       }
       */

}


signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
