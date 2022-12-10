#include <bits/stdc++.h>

using namespace std;



int main() {
	setlocale(LC_ALL, "Russsian");
	stack <int> st;
	
	st.push(2);
	st.push(43);
	st.push(3);
	st.push(9);
	
	while(!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
	
	
	
	
	
	
	
	
	
	return 0;
} 
