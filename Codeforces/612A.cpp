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
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end();

pair<int, int> findNum(int a, int b, int c)
{
       bool ok = false;
       for(int i = 0; i * b <= a; i++){
              for(int j = 0; i * b + j * c <= a; j++){
                     if(i * b + j * c == a){
                            return {i, j};
                            ok = true;
                     }
              }
       }

       if(!ok){
              return {-1, -1};
       }
}

string stringPermutation(string str, int l, int r)
{
       string s = "";
       for(int i = l; i <= r; i++){
              s += str[i];
       }

       return s;
}


void solve()
{
       int n, p, q; cin >> n >> p >> q;
       string s; cin >> s;
       vector<string> str;


       pair<int, int> i = findNum(n, p, q);

       int f1 = i.F;
       int f2 = i.S;
       if(f1 == -1 && f2 == -1){
              cout << -1 << endl;
              return;
       }
       int l = 0;
       int r = p - 1;
       string g = "";
       for(int i = 0; i < f1; i++){
              g = stringPermutation(s, l, r);
              str.pb(g);
              l += p;
              r += p;
       }

       int l2 = s.sz - (s.sz - (f1 * p));
       int r2 = l2 + q - 1;

       for(int i = 0; i < f2; i++){
              string g = stringPermutation(s, l2, r2);
              str.pb(g);
              l2 += q;
              r2 += q;
       }
       cout << str.sz << endl;
       for(int i = 0; i < str.sz; i++){
              cout << str[i] << endl;
       }


}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
