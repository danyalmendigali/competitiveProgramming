#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

void solve() {
    string name;
    cin >> name;
    vector <char> chars(name.begin(), name.end());
    sort(chars.begin(), chars.end());

    auto it = unique(chars.begin(), chars.end());
    chars.erase(it, chars.end());

    if(chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM";
    }



}


int main() {
	cin.tie(0);
	solve();






	return 0;
}
