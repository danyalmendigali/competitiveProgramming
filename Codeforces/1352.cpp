#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int q;
    cin >> q;
    while(q--) {
    int n;
    cin >> n;
    int a, b, c, d, e, f, g, h, t, y, u;
    a = n / 10000;
    b = n % 10000;
    c = b / 1000;
    d = b % 1000;
    e = d / 100;
    g = d % 100;
    h = g / 10;
    t = g % 10;
    y = t / 1;
    u = t % 1;

    int k = 0;

    if(a * 10000 != 0) {
        k++;
    }
     if(c * 1000 != 0) {
           k++;
    }
     if(e * 100 != 0) {
           k++;
    }
     if(h * 10 != 0) {
           k++;
    }
     if(y != 0) {
           k++;
      }
      cout << k << endl;

    if(a * 10000 != 0) {
        cout << a * 10000 << " ";
    }
     if(c * 1000 != 0) {
          cout << c * 1000 << " ";
    }
     if(e * 100 != 0) {
          cout << e * 100 << " ";
    }
     if(h * 10 != 0) {
           cout << h * 10 << " ";
    }
     if(y != 0) {
        cout << y << " ";
         }
    cout << endl;
    }



        /*
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> roundNumbers;
        int multiplier = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << roundNumbers.size() << endl;
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }
      */

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();




   return 0;
}

