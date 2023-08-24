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

    vector<int> fibonacci(1200000000);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < 1200000000; i++)
    {
        fibonacci[i] = fibonacci[i - 2] +  fibonacci[i - 1];
    }


}


int main() {


    solve();





    return 0;
}


