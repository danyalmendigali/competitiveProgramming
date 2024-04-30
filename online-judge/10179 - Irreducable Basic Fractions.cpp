#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

int phi(int n)
{
    ll res = n;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0) n /= i;
            res -=  res / i;
        }
    }
    if(n > 1)  res -= res / n;
    return res;
}


void solve()
{
    int val;
    cin >> val;
    if(val) cout << phi(val) << endl;
    else return;
    while(cin >> val){
        if(val != 0){
            cout << phi(val) << endl;
        }
        else{
            return;
        }
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
