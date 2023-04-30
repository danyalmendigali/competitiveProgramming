#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    setlocale(LC_ALL, "Russian");
    int n, l = 0;
    cin >> n;
    vector <int> myVector(n);

    for(int i = 0; i < n; i++) {
        cin >> myVector[i];
        if(myVector[i] % 3 == 0) {
            l += myVector[i];
        }
    }

    cout << l;











   return 0;
}
