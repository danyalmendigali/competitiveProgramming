#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
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
#define Mendigali_Daniyal ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

void mendigali()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       sort(all(a));

       vector<int> b;
       while(!a.empty()){
              if(!a.empty()){
                     b.pb(a[0]);
                     a.erase(a.begin());
              }
              if(!a.empty()){
                     b.pb(a[a.sz - 1]);
                     a.erase(a.end() - 1);
              }
       }
       reverse(all(b));

       for(int i = 0; i < b.sz; i++){
              cout << b[i] << " ";
       }
       cout << endl;

}

signed main()
{
       Mendigali_Daniyal;
       int t;
       t = 1;
       cin >> t;
       while(t--) mendigali();



       return 0;
}
