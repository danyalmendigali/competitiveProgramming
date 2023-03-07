#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <windows.h> 
#include <stdio.h> 

using namespace std;

int main() {
	string s;
	cin >> s;
	vector <int> a;
	for(int i = 0; i < s.size(); i+=2) {
		a.push_back(s[i] - 48);
	}
	
	sort(a.begin(), a.end());
	
	for(int i = 0; i < a.size() - 1; i++) {
		cout << a[i] << "+";
	}
	
	cout << a[a.size() - 1];
	
	
	
	return 0;
}
