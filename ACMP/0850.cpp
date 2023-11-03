#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve()
{
    long long int a, b;
    cin >> a >> b;

    long long int min_crane = (min(a, b) + abs(a - b) + 1) / 2;
    long long int max_crane = (max(a, b) + 1) / 2;

    cout << min_crane << " " << max_crane << endl;
}


int main() {


    solve();





    return 0;
}


