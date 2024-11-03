#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

const ll N = 1e6 , inf = 1e9 + 9 , mod = 1e9 + 7;


void solve()
{
       int t; cin >> t;
       vector<int> res(N);
       for(int i = 1; i < N; i++){
              res[i] =(res[i - 1] ^ i);
       }
       int a, b;

       while(t--){
              cin >> a >> b;
              int f = res[a - 1] ^ b;
              if(f == 0){
                     cout << a << endl;
              }
              else if(f == a){
                     cout << a + 2 << endl;
              }
              else{
                     cout << a + 1 << endl;
              }
       }



}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}
