#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>

using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    long long int a = 0;
    vector<long long int> myVector(n);
    for(int i = 0; i < n; i++)
    {
        cin >> myVector[i];
    }

    long long int minElement = myVector[0];
    for(int i = 0; i < n; i++)
    {
        if(myVector[i] <= minElement)
        {
            minElement = myVector[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(myVector[i] > minElement)
        {
            a += myVector[i] - minElement;
        }
    }
    cout << a << "\n";


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


