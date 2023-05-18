#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

int solve() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b = 0;
        cin >> a;
        int arr[a];
        for(int i = 0; i < a; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + a);

        for(int i = 0; i < a - 1; i++) {
            if(arr[i] >= arr[i + 1]) {
                b++;
            }
        }
        cout << ((b == 0)? "YES" : "NO") << endl;
    }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();



   return 0;
}
