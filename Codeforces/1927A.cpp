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
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int ind1 = 0, ind2 = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == 'B'){
            ind1 = i + 1;
        }
    }
    for(int i = s.sz; i >= 0; i--){
        if(s[i] == 'B'){
            ind2 = i;
        }
    }
    cout << abs(ind1 - ind2) << endl;


}

signed main()
{
    _mendigali_;
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
