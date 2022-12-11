#include <iostream>
using namespace std;

int main() {
	int t1, t2;
	int h, m;
	
	scanf("%d:%d", &t1, &t2);
	cin >> h >> m;
	t1 += h;
	t2 += m;
	t1 += t2/ 60;
	t2 %= 60;
	t1 %= 24;
	
	if(t1 < 10) cout << 0;
	cout << t1 << ":";
	if(t2 < 10) cout << 0;
	cout << t2;
	
	
	
	
	
	
	return 0;
}
