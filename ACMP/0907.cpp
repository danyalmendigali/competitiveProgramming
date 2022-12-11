#include <iostream>
using namespace std;

int main() {
        int w, h, r , d;
        cin >> w >> h >> r;
        
        d = r * 2;
        
        if  ((h >= d) && (w >= d)) cout << "YES";
	    else cout << "NO" ;
 
 
 
 
	return 0;
}
