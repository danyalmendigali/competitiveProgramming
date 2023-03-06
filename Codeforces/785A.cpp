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
	int n, a = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(s == "Icosahedron") {
		 a += 20;
		}
		if(s == "Cube") {
		 a += 6;
		}
		if(s == "Tetrahedron") {
		 a += 4;
		}
		if(s == "Dodecahedron") {
		 a += 12;
		}
		if(s == "Octahedron") {
		 a += 8;
		}
	}
	cout << a;
	
	
	
	return 0;
}
