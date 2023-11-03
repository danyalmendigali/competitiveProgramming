#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        set<string> melodies;
        for (int i = 0; i < n - 1; ++i) {
            melodies.insert(s.substr(i, 2));
        }

        cout << melodies.size() << endl;
    }

    return 0;
}

