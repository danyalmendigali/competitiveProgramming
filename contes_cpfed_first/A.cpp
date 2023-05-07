#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int astana_time = 11;
    int asyl_time = astana_time - 6 + n;
    if (asyl_time < 0) asyl_time += 24;
    if (asyl_time >= 24) asyl_time -= 24;

    printf("%02d:%02d", asyl_time, 0);

    return 0;
}
