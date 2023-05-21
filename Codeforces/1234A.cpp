#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
        int t;
        cin >> t;
        while(t--) {
        int n;
        cin >> n;
        int sum = 0;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum % n == 0) {
            cout << sum / n << endl;
        }

        if(sum % n != 0) {
            cout << (sum / n) + 1 << endl;
        }


    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
       solve();




   return 0;
}


