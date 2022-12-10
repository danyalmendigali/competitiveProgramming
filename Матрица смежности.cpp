#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > adj;

int main() {
	queue <int> Queue;
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
	
	/*
	for(int i = 0; i < adj.size(); i++) {
		for(int j = 0; j < adj[i].size(); j++) {
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	
	
	
	
		int nodes[n]; // вершины графа
	for(int i = 0; i < n; i++) 
		nodes[i] = 0; // исходно все вершины равны 0
	
	Queue.push(0); // помещаем в очередь первую вершину
	while(!Queue.empty()) // пока очередь не пуста
	{
		int node = Queue.front(); // извлекаем вершину
		Queue.pop();
		nodes[node] = 2; // отмечаем ее как посещенную
		for(int j = 0; j < n; j++) { // проверяем для нее все смежные вершины
			if(arr[node][j] == 1 && nodes[j] == 0) { // если вершина смежная и не обнаружена
				Queue.push(j); // добавляем ее в очередь
				nodes[j] = 1; // отмечаем вершину как обнаруженную
			}
		}
		cout << node + 1 << endl; // выводим номер вершины
	}
	cin.get();
	
	
	
	
	
	
	return 0;
}
