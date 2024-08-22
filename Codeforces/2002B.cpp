#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
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
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


const int MxN = 3 * (3e5 + 9);
const ll INF = 1e18;


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--){
              int n; cin >> n;
              bool ok = false;
              vector<int> a(n), b(n), posA(n);
              for(int i = 1; i <= n; i++){
                     cin >> a[i];
                     posA[n - i - 1] = a[i];
              }

              for(int i = 1; i <= n; i++){
                     cin >> b[i];
                     if(b[i] != a[i]) ok = true;
              }


              if(ok){
                     ok = false;
                     for(int i = 1; i <= n; i++){
                            if(b[i] != posA[i]){
                                   ok = true;
                                   break;
                            }
                     }
              }

              if(ok){
                     cout << "Alice" << endl;
              }
              else{
                     cout << "Bob" << endl;
              }
       }


       return 0;
}
