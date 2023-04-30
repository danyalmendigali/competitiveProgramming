#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    int n, h = 0;
	cin >> n;
	vector <ll int> myVector(n);
	for(ll int i = 0; i < n; i++) {
        cin >> myVector[i];
	}

	for(ll int i = 0; i < n; i++) {
        if(myVector[i] != myVector[i + 1]) {
            h++;
        }
	}

	cout << h;








   return 0;
}
