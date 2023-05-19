#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int INT_ARR = 4;

int solve() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int colors[] = {s1, s2, s3, s4};
    sort(colors, colors + 4);

    int count = 0;
    for (int i = 1; i < 4; i++) {
        if (colors[i] == colors[i - 1])
            count++;
    }

    cout << count << endl;





}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
