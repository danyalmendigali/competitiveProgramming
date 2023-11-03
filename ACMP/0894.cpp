#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

const double PI = 3.14159265;

void solve()
{
    double s, r1;
    cin >> s >> r1;
    double res = sqrt(pow(r1,  2) - (s / PI));
    cout << fixed << setprecision(3) << res << endl;

}


int main() {


    solve();





    return 0;
}
