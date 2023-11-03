#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

bool isODD(long long int n,  long long int k)
{
    if(n >= k * k && (n - k * k) % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    long long int t;
    cin >> t;

    while (t--) {
        long long int n, k;
        cin >> n >> k;
        if(isODD(n, k))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }




   return 0;
}


