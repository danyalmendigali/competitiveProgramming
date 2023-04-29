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
	
	
	
	
	
	return 0;
}
