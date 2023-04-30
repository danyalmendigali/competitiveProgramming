#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	setlocale(LC_ALL, "Russian");

	cout << "Введите количество числе в векторе: " << endl;
	int n;
	cin >> n;
	vector<int> myVector(n);

	for(int i = 0; i < n; i++) {
		cout << "Введите " << i << " элемент: " << endl;
		cin >> myVector[i];
		myVector.push_back(myVector[i]);
	}

	for(int i = 0; i < n; i++) {
		cout << i << " элемент вектора: ";
		cout << myVector[i]  << endl;
	}











   return 0;
}
