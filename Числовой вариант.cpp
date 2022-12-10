#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   cin >> s;
   int k = s.size();
   for(int i = 0; i < 2; i++) {
   	cin >> s;
   	if(s.size() < k ) {
	   
   	 k = s.size(); 
   }
   }
   cout << k;
   
 
	
	
	return 0;
}
