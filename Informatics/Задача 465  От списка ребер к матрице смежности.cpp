#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > adj;

int main() {
	int n;
	cin >> n;
	adj.resize(n);
	for(int i = 0; i < adj.size(); i++) {
		for(int j = 0; j < n; j++) 
			adj[i].resize(n, 0);	
	}
	
	int p;
	cin >> p;
	for(int i = 0; i < p; i++) {
		int x, y;
		cin >> x >> y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}
	
	
	for(int i = 0; i < adj.size(); i++) {
		for(int j = 0; j < adj[i].size(); j++) {
			cout << adj[i][j] << " ";
		}	
		cout << "\n";
	}
	
	
	
	
	
	return 0;
}
