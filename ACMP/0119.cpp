#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> result {};

    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int g = (a * 3600) + (b * 60) + c;
        result.push_back(g);
    }

    sort(result.begin(), result.end());

    for(int i = 0; i < result.size(); i++)
    {
        int a = result[i];
        int  f, b, c, d, e;
        f = a / 3600;
        b = a % 3600;
        d = b % 60;


        cout << f << " " << b / 60 <<  " " << d << "\n";
    }

}

int main() {


    solve();


    return 0;
}



