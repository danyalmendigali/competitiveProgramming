#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	int a[1001], i, n, l, r, k;
	  cin >> n;
	
	for(i = 1; i <= n; i++) {
	  cin >> a[i];
  }
	  cin >> l >> r;
	  k = l;
	
    for(i = l + 1; i <= r; i++) {	
	   if(a[i] > a[k]) {
	      k = i;
    }
}
	cout << a[k] << " " << k;

	
	
	
	
	
	
	return 0;
}
