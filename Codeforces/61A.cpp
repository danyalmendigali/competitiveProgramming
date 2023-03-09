#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

char s[500], c[500];
int n, i, a, b;	
int main() {
	scanf ("%s%s", s, c);
	n = strlen(s);
	
	for(int i = 0; i < n; i++) {
		a = s[i] - '0';
		b = c[i] - '0';
		printf("%d", a^b);
	}
	
	
	
	
	
	
	return 0;
}
