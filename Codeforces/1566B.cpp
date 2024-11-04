#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


void solve()
{
       string s; cin >> s;

       bool ok1 = false, ok2 = false;

       for(int i = 0; i < s.sz; i++){
              if(s[i] == '0') ok1 = true;
              if(s[i] == '1') ok2 = true;
       }


       if(!ok1){
              cout << 0 << endl;
              return;
       }
       else if(!ok2){
              cout << 1 << endl;
              return;
       }
       else{
              int cnt = 0;
              for(int i = 0; i < s.sz; i++){
                     if(s[i] == '0' && (i == 0 || s[i - 1] == '1')){
                            cnt++;
                     }
              }

              cout << min(cnt, 2) << endl;
              return;
       }



}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();





    return 0;
}
