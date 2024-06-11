#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <stack>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


bool isGoodString(string s, int k)
{
       bool ok = false;
       vector<int> pos;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'x'){
                     pos.pb(i + 1);
              }
       }
       int mx = -1;

       for(int i = 0; i < pos.sz - 1; i++){
               mx = max(mx, pos[i + 1] - pos[i]);
       }

       if(mx <= k){
              ok = true;
       }

       return ok;

}

void solve()
{
       int n, k; cin >> n >> k;
       string s; cin >> s;
       int res = 0;

       for(int i = 0; i < s.sz; i++){
              if(s[i] == '*'){
                     s[i] = 'x';
                     res++;
                     break;
              }
       }
       for(int i = s.sz - 1; i > 0; i--){
              if(s[i] == '*'){
                     s[i] = 'x';
                     res++;
                     break;
              }
       }

       vector<int> pos;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'x'){
                     pos.pb(i);
              }
       }

       for(int i = 0; i < pos.sz - 1; i++){
              int posStart = pos[i];
              int posEnd = pos[i + 1];
              if(posEnd - posStart > k){
                      for(int j = posStart + k; j >= posStart; j--){
                            if(s[j] == '*'){
                                   s[j] = 'x';
                                   res++;
                                   pos.insert(pos.begin() + i + 1, j);
                                   break;
                            }
                      }
              }
       }
       cout << res << endl;


}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
