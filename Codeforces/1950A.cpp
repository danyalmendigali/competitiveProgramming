#include <iostream>
#include <vector>
#include <string>
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
    int a, b, c; cin >> a >> b >> c;
    if(a < b && b < c){
        cout << "STAIR" << endl;
        return;
    }
    if(a < b && b > c){
        cout << "PEAK" << endl;
        return;
    }
    else{
        cout << "NONE" << endl;
        return;
    }


}

signed main()
{
    int t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}
