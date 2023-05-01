#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <int> v {1, 2, 3, 2, 5, 2, 6, 2, 4, 8};

    const auto new_end (remove(begin(v), end(v), )); // убирает все значения 2 из вектора
    v.erase(new_end, end(v));

    for(auto i : v) {
        cout << i << ", ";
    }
    cout << "\n";

    const auto odd ([](int i) { return i % 2 != 0; });
    v.erase(remove_if(begin(v), end(v), odd), end(v));
    v.shrink_to_fit();

    for(auto i : v) {
        cout << i << ", ";
    }
    cout << "\n";






   return 0;
}
