#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    string s;
    int n;
    cin >> n;
    for(int i = 0; i < 1000; i++)
    {
        s += to_string(i);
    }

    cout << s[n] << "\n";
}

int main() {
    cin.tie(0);
    solve();







    return 0;
}

