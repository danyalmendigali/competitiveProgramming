#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n;
    cin >> n;
    vector <int> myVector(n);
    for (int i = 0; i < n; i++) {
        cin >> myVector[i];
    }


    int chest = 0, biceps = 0, back = 0;

    for (int i = 0; i < myVector.size(); i++) {
        if (i % 3 == 0) {
            chest += myVector[i];
        }
        else if (i % 3 == 1) {
            biceps += myVector[i];
        }
        else {
            back += myVector[i];
        }
    }

    if (chest >= biceps && chest >= back) {
        cout << "chest";
    } else if (biceps >= chest && biceps >= back) {
        cout << "biceps";
    } else {
        cout << "back";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();




   return 0;
}
