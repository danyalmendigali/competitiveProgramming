#include <iostream>
#include <string>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve()
{
    string s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        s += to_string(i);
    }

    cout << s[n];
}


int main() {
    cin.tie(0);

    solve();





    return 0;
}
