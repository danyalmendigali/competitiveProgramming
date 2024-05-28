#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

vector<int> eratosthenes(int n)
{
       vector<bool> is_prime(n + 1, true);
       is_prime[0] = is_prime[1] = false;
       for(int i = 2; i <= n; i++){
              if(is_prime[i] && i * 1ll * i <= n){
                     for(int j = i * i; j <= n; j += i){
                            is_prime[j] = false;
                     }
       }
       vector<int> res;
       int res_num = 0;
       for(int i = 2; i <= n; i++){
              if(is_prime[i]){
                     res.pb(i);
                     res_num++;
              }
       }
       //return res_num;
       return res;
}

void solve()
{
       int n; cin >> n;
       vector<int> res = eratosthenes(n);
       for(int i = 0; i < res.sz; i++){
              cout << res[i] << " ";
       }
       cout << endl << endl;


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
