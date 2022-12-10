#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	int arr[n], arr2[a];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int j = 0; j < a; j++) {
		cin >> arr2[j];
	}
	
	
    for(int j = 0; j < a; j++) {
        for(int i = 0; i < n; i++) {
        if(arr2[j] == arr[i]) {
        	cout << "YES" ;
		    }
		    
	    if(arr2[j] != arr[i]) {
	    	cout << "NO";
		}
		}
	}
	
	
	
	
	
	return 0;
}
