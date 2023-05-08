#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n, temp, min1 = 101, mini, maxi, max1 = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(mini >= temp) {
            min1 = temp;
            mini = i;
        }
        if(max1 < temp) {
            max1 = temp;
            maxi = i;
        }
    }
    int res = maxi;
    if(maxi > mini)
        res--;
    res += n - mini - 1;
    cout << res << endl;
}



int main() {
     ios::sync_with_stdio(false);
     cin.tie(0);

     /*int t;
     cin >> t;
     while(t--)*/
        solve();







   return 0;
}


