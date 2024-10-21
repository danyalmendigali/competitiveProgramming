#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

int fact(int n)
{
       if(n <= 1){
              return 1;
       }
       else{
              return n * fact(n - 1);
       }
}


void solve()
{
       int n; cin >> n;
       string s; cin >> s;
       string new_s = "";

       for(int i = 0; i < s.sz; i++){
              if(s[i] == '0' || s[i] == '1') continue;
              if(s[i] == '2') new_s += '2';
              else if(s[i] == '3') new_s += '3';
              else if(s[i] == '4') new_s += "322";
              else if(s[i] == '5') new_s += '5';
              else if(s[i] == '6') new_s += "53";
              else if(s[i] == '7') new_s += '7';
              else if(s[i] == '8') new_s += "7222";
              else if(s[i] == '9') new_s += "7332";


       }
       sort(new_s.rbegin(), new_s.rend());


       cout << new_s << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
