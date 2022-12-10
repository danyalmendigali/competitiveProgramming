#include <iostream>
using namespace std;

int main()  {
	 int l ,a = 1 , b = 2 , c , d , e , f ,g ,h;
	 char q;
	 cin >> l >> q;
	 if ( l % 2 == 0 && q % 2 == 0) cout << "BLACK";
	 if ( l % 2 == 0 && q % 2 == 1) cout << "WHITE";
	  if ( l % 2 == 1 && q % 2 == 0) cout << "WHITE";
	
	return 0;
} 
