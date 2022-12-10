#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> Stack;
	int n;
	cin >> n;
	int arr[n][n]; 
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int nodes[n]; 
	for(int i = 0; i < n; i++)  
		nodes[i] = 0;
		Stack.push(0); 	
	
		
	
	
	while(!Stack.empty())
	{ 
		int node = Stack.top(); 
		Stack.pop();
		if(nodes[node] == 2) continue;
		nodes[node] = 2; 
		for(int j = n - 1; j >= 0; j--) 
		{
			if(arr[node][j] == 1 && nodes[j] != 2)
			{ 
				Stack.push(j); 
				nodes[j] = 1; 
			}
		}
		cout << node + 1 << endl; 
	}
	
	cin.get();
	
	
	return 0;
}
