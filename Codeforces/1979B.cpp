#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

int f(int a, int b)
{
       int xor_a = a ^ b;
       int res = 1;

       while(xor_a % 2 == 0){
              xor_a >>= 1;
              res <<= 1;
       }
       return res;
}


void solve(){
       int a, b; cin >> a >> b;
       cout << f(a, b) << endl;

}


signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
