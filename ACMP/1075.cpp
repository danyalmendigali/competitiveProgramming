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
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0)

using namespace std;

void solve()
{
    vector<int> dp1(11) , dp2(11);
    int a = 0;
    int b = 0;
    for(int i = 0; i < dp1.sz; i++){
        cin >> dp1[i];
    }
    for(int i = 0; i < dp2.sz; i++){
        cin >> dp2[i];
    }
    for(int i = 0; i < dp1.sz; i++){
        if(dp1[i] < dp2[i]){
            a++;
        }
        if(dp1[i] > dp2[i]){
            b++;
        }
    }
    if(a > b){
        cout << "First" << endl;
        return;
    }
    cout << "Second" << endl;



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
