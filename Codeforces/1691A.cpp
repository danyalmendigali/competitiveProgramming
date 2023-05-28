#include <bits/stdc++.h>

#define ll long long
#define ar array
/*
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int even = 0;
		for (int i = 0; i < n; i++) {
			even += (a[i] % 2 == 0);
		}
		cout << min(even, n - even) << '\n';
	}
*/

using namespace std;

int countRemovedElements(const vector<int>& sequence) {
    int oddCount = 0;
    int evenCount = 0;

    for (int num : sequence) {
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    return min(oddCount, evenCount);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin >> a;

    while (a--) {
        int n;
        cin >> n;

        vector<int> sequence(n);
        for (int i = 0; i < n; i++) {
            cin >> sequence[i];
        }

        int removedCount = countRemovedElements(sequence);
        cout << removedCount << endl;
    }

    return 0;
}

