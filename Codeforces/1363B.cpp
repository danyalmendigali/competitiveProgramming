#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve()
{
       string s; cin >> s;
       if(s[0] == '0' && s[s.sz - 1] == '0'){
              int sum = 0;
              for(int i = 0; i < s.sz; i++){
                     if(s[i] == '1'){
                            sum++;
                     }
              }
              cout << sum << endl;
       }
       iota







}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

