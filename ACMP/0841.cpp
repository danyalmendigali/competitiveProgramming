#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;



int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if(n == 0)
    {
        cout << 1 << "\n";
        return false;
    }


    else
    {
        int a = 2 + ( n * ( n - 1));
        cout << a << "\n";
    }



    return 0;
}








