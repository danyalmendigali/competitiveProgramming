#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> myVector(n);
    for(int i = 0; i < n; i++)
    {
        cin >> myVector[i];
    }

    vector<int> myVector2 = myVector;

    sort(myVector2.begin(), myVector2.end());
    int size_vector1 = myVector2.size();


    int maxElement1 = myVector2[size_vector1 - 1]; // Первый максимальный элемент
    int maxElement2 = myVector2[size_vector1 - 2]; // Второй максимальный элемент

    for(int i = 0; i < n; i++)
    {
        if(myVector[i] != maxElement1)
        {
            cout << maxElement1 = myVector[i] << " ";
        }
        if(myVector[i] == maxElement1)
        {
            cout << myVector[i] - maxElement2
        }
    }



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


