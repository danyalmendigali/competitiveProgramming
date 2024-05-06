#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>


using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define lb() lower_bound()
#define ub() upper_bound()


void solve_task() {
    int m, s;
    cin >> m >> s;
    if(m == 0 && s == 0){
       cout << 0 << " " << 0 << endl;
       return;
    }
    if(m * 9 < s){
       cout << -1 << " " << -1 << endl;
       return;
    }
    if(m == 1 && s == 0){
       cout << 0 << " " << 0 << endl;
       return;
    }
    if((m > 1 && s == 0)){
       cout << -1 << " " << -1 << endl;
       return;
    }
    if(m * 9 == s){
       string str = "";
       for(int i = 0; i < m; i++){
              str += '9';
       }
       cout << str << " " << str << endl;
       return;
    }
    if (m == 0 && s == 0) {
        cout << 0 << " " << 0 << endl;
        return;
    }

    if (s == 0 || s > 9 * m) {
        cout << -1 << " " << -1 << endl;
        return;
    }

    string mx;
    int remaining_sum = s;
    for (int i = 0; i < m; ++i) {
        int digit = min(remaining_sum, 9);
        mx += char('0' + digit);
        remaining_sum -= digit;
    }
    string mn = mx;
    reverse(all(mn));
    if (mn[0] == '0') {
        for (int i = 1; i < mn.sz; ++i) {
            if (mn[i] != '0') {
                mn[i] -= 1;
                mn[0] = '1';
                break;
            }
        }
    }

    cout << mn << " " << mx << endl;
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve_task();



       return 0;
}
