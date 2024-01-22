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
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

map<char, int> mp1;

void solve()
{
    mp1.clear();
    int a = 0, b = 0;
    string s; cin >> s;
    for(int i = 0; i < s.sz; i++){
        mp1[s[i]]++;
    }
    for(auto i : mp1){
        if(i.S % 2 == 0){
            a++;
        }
        if(i.S % 2 == 1){
            b++;
        }
    }
    if(b == 0){
        cout << "First" << endl;
        return;
    }
    b--;
    if(b == 0){
        cout << "First" << endl;
        return;
    }
    if(b % 2 == 0){
        cout << "First" << endl;
        return;
    }
    else{
        cout << "Second" << endl;
        return;
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
