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
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve()
{
    vector<string> str;
    string s;
    while(cin >> s){
        str.pb(s);
    }
    reverse(str.begin(), str.end());
    for(int i = 0; i < str.sz; i++){
        cout << str[i] << " ";
    }
    cout << endl;



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
