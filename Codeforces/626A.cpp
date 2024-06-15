#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
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
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


bool ok(const string& s, int l, int r)
{
       bool ok = false;
       int a = 0, b = 0, c = 0, d = 0;
       pair<int, int> pr = {0, 0};
       for(int i = l; i <= r; i++){
              if(s[i] == 'U') pr.F++;
              if(s[i] == 'D') pr.F--;
              if(s[i] == 'R') pr.S++;
              if(s[i] == 'L') pr.S--;
       }

       if(pr.F == 0 && pr.S == 0){
              ok = true;
       }


       return ok;
}



void Daniyal_Mendigali()
{
       int n; cin >> n;
       string s; cin >> s;
       int ans = 0;
       string res = "";

       for(int i = 0; i < n; i++){
              for(int j = i; j < n; j++){
                     if(ok(s, i, j)) ans++;
              }
       }

       cout << ans << endl;

}

signed main()
{
       mendigali;
       int t;
       t = 1;
       //cin >> t;
       while(t--) Daniyal_Mendigali();

       return 0;
}
