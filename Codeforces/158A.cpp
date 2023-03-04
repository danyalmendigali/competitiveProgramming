#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, temp;
	cin >> n >> k;
	
	vector<int> a; 
	for(int i = 0; i < n; i++) {
		cin >> temp;
		a.push_back(temp);
	}
	
	int t = a[k - 1], res = 0;
	for(int i = 0; i < a.size(); i++) {
		if(a[i] > 0 && a[i] >= t) {
			res++;
		}
	}
	
	cout << res;
	
	return 0;
}
