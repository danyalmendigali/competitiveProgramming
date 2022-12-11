#include <iostream>
using namespace std;

int main() {
	int n, age, sex, max = -1, k = -1;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> age >> sex;
		if((sex == 1) && (age > max)) {
			max = age;
			k = i + 1;
		}
	}
	
	cout << k;

	
	
	
	
	
	
	return 0;
}
