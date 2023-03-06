#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
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
	int n, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(s == "Icossumhedron") {
		 sum += 20;
		}
		if(s == "Cube") {
		 sum += 6;
		}
		if(s == "Tetrsumhedron") {
		 sum += 4;
		}
		if(s == "Dodecsumhedron") {
		 sum += 12;
		}
		if(s == "Octsumhedron") {
		 sum += 8;
		}
	}
	cout << sum;
	
	
	
	return 0;
}
