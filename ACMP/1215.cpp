#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
    int n;
    cin >> n;

    vector <int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int X;
    cin >> X;
    int closest = A[0];

        for(int i = 1; i < n; i++) {
            if(abs(A[i] - X) < abs(closest - X)) {
                closest = A[i];
            }
            else if(abs(A[i] - X) == abs(closest- X) && A[i] < closest) {
                closest = A[i];
            }
        }

    cout << closest;




}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    /*int t;
    cin >> t;
    while(t--)
        */
     solve();




    return 0;
}

