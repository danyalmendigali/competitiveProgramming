
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
        int t;
        cin >> t;
        while(t--) {
        int a;
        cin >> a;
        vector <char> myChar;
        for(int i = 0; i < a; i++) {
            char h;
            cin >> h;
            myChar.push_back(h);
        }
        for(int i = 0; i < myChar.size(); i++) {
            myChar[i] = tolower(myChar[i]);
        }


        auto it = unique(myChar.begin(), myChar.end());
        myChar.erase(it, myChar.end());

          cout << ((myChar.size() == 4 && myChar[0] == 'm' && myChar[1] == 'e' && myChar[2] == 'o' && myChar[3] == 'w') ? "YES" : "NO") << endl;

        }










}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}




