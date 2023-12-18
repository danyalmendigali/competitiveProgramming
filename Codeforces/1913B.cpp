#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve() {
    int a = 0, b = 0;
    string s, res = ""; cin >> s;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == '0'){
            a++;
        }
        if(s[i] == '1'){
            b++;
        }
    }


    for(int i = 0; i < s.sz; i++){
        if(s[i] == '0' && b < 1 || s[i] == '1' && a < 1){
            break;
        }
        if(s[i] == '0' && b > 0){
            res += '1';
            b--;
        }
        else if(s[i] == '1' && a > 0){
            res += '0';
            a--;
        }
    }

    int g = abs(s.sz - res.sz);
    cout << g << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
