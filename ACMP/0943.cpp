#include <iostream>
using namespace std;

void solve()
{
    int n, m, y, x;
    cin >> n >> m >> y >> x;

    if(y % 2 == 1)
    {
        cout << (y - 1) * m + (x - 1);
    }
    else
    {
        cout << y * m - x
;    }


}

int main()
{
	solve();



	return 0;
}

