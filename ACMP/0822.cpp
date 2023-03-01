#include <iostream>
#include <cmath>
using namespace std;

double len(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
	double x1, x2, x3, y1, y2, y3;
	double a, b, c, p, s;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = len(x1, y1, x2, y2);
	b = len(x1, y1, x3, y3);
	c = len(x3, y3, x2, y2);
	
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	
	cout.precision(1);
	cout  << fixed << s;



	
	
	
	
	
	
	return 0;
}
