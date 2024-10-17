#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()



void solve()
{
       string s1, s2; cin >> s1 >> s2;
       double  res1 = 0, res2 = 0, cnt_q = 0;
       for(int i = 0; i < s1.sz; i++){
              if(s1[i] == '+'){
                     res1++;
              }
              if(s2[i] == '?'){
                     cnt_q++;
              }
              if(s2[i] == '+'){
                     res2++;
              }
              if(s2[i] == '-'){
                     res2--;
              }
              if(s1[i] == '-'){
                     res1--;
              }
       }

       if(cnt_q == 0){
              if(res1 != res2){
                     cout << "0.0000000" << endl;
              }
              else{
                     cout << fixed << setprecision(9) << res1 / res2 << endl;
              }
              return;
       }
       int res3 = res2;

       string s = "";
       for(int i = 0; i < cnt_q; i++){
              s += '?';
       }

       int tot = 1 << s.sz;
       vector<int> ans;
       int tot_ans = 0;

       double cnt_h = 0;


       for(int i = 0; i < tot; i++){
              string new_s = s;
              res3 = res2;
              for(int j = 0; j < s.sz; j++){
                     if(i & (1 << j)){
                            new_s[j] = '+';
                     }
                     else{
                            new_s[j] = '-';
                     }
              }
              cnt_h++;

              for(int j = 0; j < new_s.sz; j++){
                     if(new_s[j] == '+'){
                          res3++;
                     }
                     if(new_s[j] == '-'){
                            res3--;
                     }
              }
              if(res3 == res1){
                     tot_ans++;
              }
       }

       cout << fixed << setprecision(9) << double(tot_ans / cnt_h) << endl;

}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
