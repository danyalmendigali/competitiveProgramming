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


string s(string s, )

void Daniyal_Mendigali()
{
       int n; cin >> n;
       vector<int> a(n);
       int ok = -1;
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       int ans = 0;
       string s = "";
       for(int i = 0; i < a.sz; i++){
              if(a[i] == '0' && ok == -1){
                     ans++;
                     ok = -1;
                     s += 'd';
              }
              if(a[i] == '1' && ok == -1){
                     ans++;
                     ok = 1;
              }
              if(a[i] == '2' && ok == 1){
                     ans++;
                     ok = 2
              }
              if(a[i] == '3' && ok <= 2){
                     ans++;
              }
       }

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
