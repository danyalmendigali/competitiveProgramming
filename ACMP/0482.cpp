#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> result;

    string s;
    int p = 1;
    while(p <= 200)
    {
        p++;
        for(int i = 1; i < p; i++)
        {
            result.push_back(i);
            s += to_string(i);
        }
    }


    cout << s[n - 1];
}

int main() {


    solve();


    return 0;
}




