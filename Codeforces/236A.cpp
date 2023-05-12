#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	vector <char> v;
	cin >> s;
	for(size_t i = 0; i < s.size(); i++)
	if(find(v.begin(), v.end(), s[i]) == v.end())
	v.push_back(s[i]);

	if(v.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else
	   cout << "IGNORE HIM!";

	   /*
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
    /*



	return 0;
}
