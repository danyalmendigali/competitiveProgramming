#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;




int main() {
    cin.tie(0);

    int size_vector;
    cin >> size_vector;
    int a = 0;

    vector<int> myVector(size_vector);
    for(int i = 0; i < size_vector; i++)
    {
        cin >> myVector[i];
        if(myVector[i] != myVector[i - 1])
        {
            a++;
        }
    }

    cout << a;







    return 0;
}

