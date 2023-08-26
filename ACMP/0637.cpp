#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

void solve()
{
    int size_vector;
    cin >> size_vector;
    vector<int> myVector(size_vector);

    int sum = 0;


    for(int i = 0; i < size_vector; i++)
    {
        cin >> myVector[i];
    }

    int k;
    cin >> k;

    for(int i = 0; i < size_vector; i++)
    {
        if(myVector[i] > k)
        {
            sum += k;
        }

        else
        {
            sum += myVector[i];
        }
    }

    cout << sum;

}

int main() {


    solve();


    return 0;
}








