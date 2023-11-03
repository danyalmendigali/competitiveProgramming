#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int size_vector;
    cin >> size_vector;
    vector<int> myVector(size_vector);
    for(int i = 0; i < size_vector; i++)
    {
        cin >> myVector[i];
    }

    int maxNum = myVector[0] + myVector[1] + myVector[2];
    for(int i = 0; i < size_vector; i++)
    {
        int currentSum = myVector[i] + myVector[(i + 1) % size_vector] + myVector[(i + 2) % size_vector];
        if(currentSum > maxNum)
        {
            maxNum = currentSum;
        }
    }

    cout << maxNum;
}

int main() {

    solve();


    return 0;
}
