#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isAutomorphic(int n) {
    long long square = (long long)n * n;
    int divisor = 1;

    while (n > 0) {
        if (n % 10 != square % 10) {
            return false;
        }
        n /= 10;
        square /= 10;
    }

    return true;
}


void solve() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (isAutomorphic(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

}

int main() {


    solve();


    return 0;
}

