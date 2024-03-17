#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int g = k - 2;
    int f = (n + g - 1) / g;
    int h = (m + 1) / 2;
    if(m == 1 || k <= 2){
        cout << 0 << endl;
        return;
    }
    if((n * 1)/ (k - 2) > (m / 2)){
        cout << 0 << endl;
    }
    else{
        if((n + m) % k == 0){
            cout << (n + m) / k;
        }
        else{
            cout << (n + m) / k + 1;
        }
    }
}

signed main()

{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
