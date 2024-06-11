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
#define sz size()n
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool ok(int num)
{
       int res = 0;
       bool ok = true;
       for(int i = 1; i <= num; i++){
              if(num % i == 0){
                     res++;
              }
       }

       if(res == 2){
              ok = false;
       }
       return ok;
}

void Daniyal_Mendigali()
{
       int n; cin >> n;
       if(n == 2 || n == 3){
            cout << n << endl;
            return;
       }

       cout << 2 << endl;



}

signed main()
{
       mendigali;
       int t;
       t = 1;
       cin >> t;
       while(t--) Daniyal_Mendigali();

       return 0;
}
