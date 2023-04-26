#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define array arr
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, sum = 0, max;
    cin >> n >> k;
    for(int i = 0; i <= n; ++i) {
        sum += i * 5;
        if(sum + k <= 240)
        {
            max = i;
        }
    }
    cout << max << endl;
 
    return 0;
}
