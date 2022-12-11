#include <iostream>
#include <string>
using namespace std;

bool cor_num(string s)
{
	string t = "ABCEHKMOPTXY";
	if(s.size() != 6) return 0;
	if((s[1] < '0' || s[1] > '9')) return 0;
	if((s[2] < '0' || s[2] > '9')) return 0;
	if((s[3] < '0' || s[3] > '9')) return 0;
	if(t.find(s[0]) == string::npos) return 0;
	if(t.find(s[4]) == string::npos) return 0;
	if(t.find(s[5]) == string::npos) return 0;
	return 1;

	
}

int main() {
	int n;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s;
		if(cor_num(s)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
			

	return 0;
}
