#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0);

using namespace std;

void solve()
{
    string str = "2.7182818284590452353602875";
    int n; cin >> n;
    if(n == 0){
        cout << 3 << endl;
        return;
    }
    for(int i = 0; i < n + 2; i++){
        cout << str[i];
        if(str[n + 1] > '4'){
            int g = (str[n] - '0') + 1;
            cout << g;
         return;
        }
    }
    cout << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
