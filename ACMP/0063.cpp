#include <iostream>
 
using namespace std;
 
int main()
{
    int s, p, x, y;
    cin >> s >> p;
    for(x = 1; x < s; x++) {
    	y = s - x;
    	if(x * y == p) {
    		cout << x << " " << y;
    		return 0;
		}
	}
    
    
    
    
    
    
    return 0;
}
