#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <stack>
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
       string s; cin >> s;
       int a = 0, b = 0, c = 0;
       vector<char> str;
       vector<int> num;
       for(int i = 0; i < s.sz; i++){
              if(s[i] >= 'a' && s[i] <= 'z' && s[i + 1] >= '0' && s[i + 1] <= '9'){
                     a++;
              }
              if(s[i] >= 'a' && s[i] <= 'z'){
                     str.pb(s[i]);
              }
              if(s[i] >= '0' && s[i] <= '9'){
                     num.pb(s[i] - '0');
              }
       }
       bool ok1 = false;
       bool ok2 = false;

       vector<int> num_cop = num;
       sort(all(num));
       if(num == num_cop){
              ok1 = true;
       }
       vector<char> str_cop = str;
       sort(all(str_cop));
       if(str == str_cop){
              ok2 = true;
       }

       if(a == 0 && ok1 && ok2){
              cout << "YES" << endl;
              return;
       }
       cout << "NO" << endl;

}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
