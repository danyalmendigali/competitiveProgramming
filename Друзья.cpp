#include <bits/stdc++.h>
using namespace std;

int n, s;
int k = -1;
bool b[100];
int a[100][100];
void dfs(int j) {
	 
	 if(b[j])
	   return;	 
	b[j] = 1;
	k++;

	for(int i = 0; i < n; i++)
	if(a[j][i])
	dfs(i);
}

int main() {
	cin >> n >> s;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	s--;
	dfs(s);
	cout << k;
	
	
	
	
	return 0;
}
