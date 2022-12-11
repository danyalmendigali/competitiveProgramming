#include <iostream>
using namespace std;

int main() {
	int n, m, t_max, t_min, p;
	cin >> n >> m;
	t_max = t_min = 0;
	for(int i = 0; i < n; i++) {
		cin >> p;
		if(p > t_min) {
			t_min = p;
		}
		t_max += p;
	}
	t_max -= (n - 1);
	
	if(m >= t_min && m <= t_max) cout << "yes";
	else cout << "no";
	
	
	
	return 0;
}
