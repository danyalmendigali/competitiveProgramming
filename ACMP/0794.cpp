#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int a = n * (min(k - 1, m) + m / k);

    cout << a;


}

int main() {


    solve();


    return 0;
}





