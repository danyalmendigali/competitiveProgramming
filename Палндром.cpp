#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    s1 = s;
    reverse(s.begin(), s.end());
    if(s1 == s) {
    	cout << "yes";
	}
	else cout << "no";
    
   
}
