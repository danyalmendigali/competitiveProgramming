#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	char temp;
	vector<int> a(26);
	
	for(int i = 0; i < n; i++) {
		cin >> temp;
		if(int(temp) < 97) {
			a[int(temp) - 65] = 1;
		}
		else {
			a[int(temp) - 97] = 1;
		}
	}
	
	sort(a.begin(), a.end());
	
	if(a[0] != a[a.size() - 1]) cout << "NO";
	else cout << "YES";
	
	
	
	
	
	
	
	return 0;
}
