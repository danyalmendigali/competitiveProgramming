#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;
    cin >> a;
    while(a--) {

    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int minElement = arr[0];
    int maxElement = arr[0];

    for(int i = 0; i < t; i++) {
        if(minElement >= arr[i]) {
            minElement = arr[i];
        }
    }


    for(int i = 0; i < t; i++) {
        if(maxElement <= arr[i]) {
            maxElement = arr[i];
        }
      }
        cout << maxElement - minElement << endl;
    }






  return 0;
}
