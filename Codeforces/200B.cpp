#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define array arr
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a = 0;
    cin >> n;
    float arr[n];
    
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
    	a += arr[i];
	}
    float h;
    h = (float)a / (float)n;
    cout << h;
    
    
    
    
    
    
    
 
    return 0;
}
