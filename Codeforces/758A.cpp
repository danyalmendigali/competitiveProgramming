#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_1 = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] >= max_1) {
            max_1 = arr[i];
        }
    }
    int price = 0;

    for(int i = 0; i < n; i++) {
        price += max_1 - arr[i];
    }

    cout << price;





}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}




