#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector <int> myVector;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        myVector.push_back(a);
    }
    int left = 0, right = n - 1;
    int solved = 0;

    while(left <= right) {
        if(myVector[left] <= k) {
            left++;
            solved++;
        }
        else if(myVector[right] <= k) {
            right--;
            solved++;
        }
        else {
            break;
        }
    }


    cout << solved << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();


    return 0;
}
