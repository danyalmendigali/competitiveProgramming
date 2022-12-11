#include <iostream>
using namespace std;

int main()
{
	int a1, b1, c1, a2, b2, c2;
	int min_1, min_2, max_1, max_2, ser_1, ser_2;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	
	max_1 = max(a1, max(b1, c1));
	max_2 = max(a2, max(b2, c2));
	min_1 = min(a1, min(b1, c1));
	min_2 = min(a2, min(b2, c2));
	ser_1 = (a1 + b1 + c1) - (max_1 + min_1);
	ser_2 = (a2 + b2 + c2) - (max_2 + min_2);
	
	
	if(max_1 == max_2 && min_1 == min_2 && ser_1 == ser_2) cout << "Boxes are equal";
	else if(max_1 <= max_2 && min_1 <= min_2 && ser_1 <= ser_2) cout << "The first box is smaller than the second one";
	else if(max_1 >= max_2 && min_1 >= min_2 && ser_1 >= ser_2) cout << "The first box is larger than the second one";
	else cout << "Boxes are incomparable";
	
	 
	  	
	  
	

	

	
	
	
	
	
	return 0;
}
