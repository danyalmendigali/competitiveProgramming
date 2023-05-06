#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();

     int l;
     cin >> l;
     for(int i = 0; i < l; i++) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max_count = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
              count++;
                if(count > max_count) {
                    max_count = count;
                }
            }
            else {
                count = 0;
            }
        }
        cout << max_count << endl;

      }

  return 0;
}
