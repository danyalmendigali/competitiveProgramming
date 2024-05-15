#include <iostream>
#include <string>
#include <vector>
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


void solve()
{
       int n, k; cin >> n >> k;
       string s; cin >> s;
       string str = "";
       if(n == 1){
              for(int i = 0; i < k; i++){
                     cout << s << "";
              }
              return;
       }
       cout << endl;
       for(int i = 0; i < k; i++){
              str += s;
       }
       for(int i = 0; i < str.sz; i++){
              if(str[i] == str[i + 1]){
                     str.erase(str.begin() + i);
                     i--;
              }
       }
       cout << str << endl;




}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}
