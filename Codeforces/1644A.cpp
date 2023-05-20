#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int index_r, index_g, index_b, index_R, index_G, index_B;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'r') {
                index_r = i;
            }

            if(s[i] == 'g') {
                index_g = i;
            }

            if(s[i] == 'b') {
                index_b = i;
            }

            if(s[i] == 'R') {
                index_R = i;
            }

            if(s[i] == 'G') {
                index_G = i;
            }

            if(s[i] == 'B') {
                index_B = i;
            }

        }

        cout << ((index_r < index_R && index_g < index_G && index_b < index_B)? "YES" : "NO") << endl;
    }



}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}



