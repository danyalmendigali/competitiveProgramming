#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t1, t2;
	string s;
	
	cin >> t1 >> t2 >> s;
	
	if(s == "freeze") cout << min(t1, t2);
    if(s == "heat") cout << max(t1, t2);
    if(s == "auto") cout << t2;
    if(s == "fan") cout << t1;
    
	
	
	
	
	return 0;
}
