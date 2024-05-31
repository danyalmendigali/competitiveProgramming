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

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false);


int numOne(string s, char str)
{
       int n = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == str){
                     n++;
              }
       }
       return n;
}


void solve()
{
       string s; cin >> s;
       int num1, num2, p1 = 0, p2 = 0;
       num1 = numOne(s, '0');
       num2 = numOne(s, '1');
       int mn = min(num1, num2);

       for(int i = 0; i < s.sz; i++){
              if(s[i] == '0'){
                     p1++;
                     num1--;
              }
              if(s[i] == '1'){
                     p2++;
                     num2--;
              }
              mn = min(mn, p1 + num2);
              mn = min(mn, p2 + num1);
       }
       cout << mn << endl;

}

signed main()
{
    ios;
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();



    return 0;
}

