#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size_vector;
    cin >> size_vector;

    vector<int> myVector(size_vector);
    for (int i = 0; i < size_vector; ++i) {
        cin >> myVector[i];
    }

    int numMagic = 0;
    int minElement = myVector[0];
    int maxElement = myVector[0];

    for (int i = 1; i < size_vector; ++i) {
        if (myVector[i] < minElement || myVector[i] > maxElement) {
            ++numMagic;
        }
        minElement = min(minElement, myVector[i]);
        maxElement = max(maxElement, myVector[i]);
    }

    cout << numMagic << endl;

    return 0;
}
