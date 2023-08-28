#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<char> str(n);
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());

    int numBallon = (str.size() * 2) + ((n - str.size()) * 1);

    cout << numBallon << "\n";


}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

