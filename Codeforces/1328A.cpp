#include <iostream>

using namespace std;

const int INF = 1e9;
#define ll long long



int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        ll a, b;
        cin >> a >> b;

        if(a % b == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << b - (a % b) << "\n";
        }
    }



    return 0;
}
