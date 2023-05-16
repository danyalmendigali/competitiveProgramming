#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    string input;
    getline(cin, input);

    unordered_set<char> letters;
    for (size_t i = 1; i < input.length() - 1; i += 3) {
        letters.insert(input[i]);
    }

    cout << letters.size() << endl;

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();


   return 0;
}
