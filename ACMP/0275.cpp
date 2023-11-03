#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

const int INF = 1e9;


int main() {

    int x, mx, mn, i = 2;
    cin >> mn >> mx;
    while(cin >> x)
    {
        i++;
        if(i % 2)
        {
            if(x < mx) mn = x;
        }
        else if(x > mx) mx = x;
    }
    cout << mx + mn;


    return 0;
}

