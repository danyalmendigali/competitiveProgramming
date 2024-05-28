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


void solve()
{
       int n; cin >> n;
       int a = 0, b = 0, c = 0;
       vector<int> vec(n);
       vector<int> vec1, vec2, vec3;
       for(int i = 0; i < n; i++){
              cin >> vec[i];
              if(vec[i] == 0){
                     vec1.pb(0);
              }
              else if(vec[i] > 0){
                     vec2.pb(vec[i]);
              }
              else{
                     vec3.pb(vec[i]);
              }
       }
       if(vec2.sz == 0){
              cout << 1 << " " << vec3[0] << endl;
              cout << 2 << " " << vec3[1] << " " << vec3[2] << endl;
              cout << vec1.sz + (vec3.sz - 3) << " ";
              for(int i = 0; i < vec1.sz; i++){
                     cout << vec1[i] << " ";
              }
              for(int i = 3; i < vec3.sz; i++){
                     cout << vec3[i] << " ";
              }
              cout << endl;
              return;
       }
       if(vec2.sz != 0){
              cout << 1 << " " << vec3[0] << endl;
              cout << 1 << " " << vec2[0] << endl;
              cout << vec1.sz + (vec2.sz - 1) + (vec3.sz - 1) << " ";
              for(int i = 0; i < vec1.sz; i++){
                     cout << vec1[i] << " ";
              }
              for(int i = 1; i < vec2.sz; i++){
                     cout << vec2[i] << " ";
              }
              for(int i = 1; i < vec3.sz; i++){
                     cout << vec3[i] << " ";
              }
              cout << endl;
              return;
       }




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
