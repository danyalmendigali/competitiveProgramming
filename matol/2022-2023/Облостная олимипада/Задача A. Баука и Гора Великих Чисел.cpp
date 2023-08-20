#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int gcd(long long int a, long long int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    long long int N, Q;
    cin >> N >> Q;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    while (Q--) {
        long long int x;
        cin >> x;
        bool isGreat = true;

        for (int i = 0; i < N && isGreat; i++) {
            for (int j = i + 1; j < N && isGreat; j++) {
                if (gcd(a[i] + x, a[j] + x) != 1) {
                    isGreat = false;
                }
            }
        }

        if (isGreat) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
