#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;

    vector<int> fibonacci(31);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < 31; i++)
    {
        fibonacci[i] = fibonacci[i - 2] +  fibonacci[i - 1];
    }

    cout << fibonacci[n];
}


int main() {


    solve();





    return 0;
}


