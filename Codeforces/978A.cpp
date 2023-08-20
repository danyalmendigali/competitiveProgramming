#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<int> seen;
    vector<int> result;


    for (int i = n - 1; i >= 0; --i) {
        if (seen.find(a[i]) == seen.end()) {
            result.push_back(a[i]);
            seen.insert(a[i]);
        }
    }


    cout << result.size() << endl;
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i] << " ";
    }
}

int main() {



    solve();





	return 0;
}
