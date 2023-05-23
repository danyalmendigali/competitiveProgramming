#include <bits/stdc++.h>
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
        int size = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr + size);

         int maxCount = 0;
         int currentCount = 1;

         for (int i = 1; i < size; ++i) {
             if (arr[i] == arr[i - 1]) {
                 currentCount++;
             } else {
                 if (currentCount > maxCount) {
                     maxCount = currentCount;
                 }
                 currentCount = 1;
             }
         }

    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    cout <<  maxCount << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();





   return 0;
}

