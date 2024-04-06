#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    ll a, b; cin >> a >> b;
    ll res = 0;
    for(int i = a; i <= b; i++){
        string s = to_string(i);
        int h = 1;
        bool has_zero = false;
        for(char ch : s){
            int digit = ch - '0';
            if(digit == 0) {
                has_zero = true;
                break;
            }
            h *= digit;
        }
        if(!has_zero && i % h == 0){
            res++;
        }
    }
    cout << res << endl;

}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
