#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, a, b, k = 0;

    cin >> n;

    cin >> a;
    for(int i = 1; i < n; i++)
    {
        cin >> b;
        if(a != (b - 1))
        {
            k++;
        }
        a = b;
    }

    cout << k;

}

int main() {
    solve();
    return 0;
}
