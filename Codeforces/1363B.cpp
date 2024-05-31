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

int numZero(int l, int r, string s)
{
       int n = 0;
       for(int i = l; i < r; i++){
              if(s[i] == '0'){
                     n++;
              }
       }
       return n;
}

int numOne(int l, int r, string s)
{
       int n = 0;
       for(int i = l; i < r; i++){
              if(s[i] == '1'){
                     n++;
              }
       }
       return n;
}

int val(string s, char t)
{
       int ans = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == t){
                     ans++;
              }
       }
       return ans;
}


void solve()
{
       string s; cin >> s;
       int g = 0;

}

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

