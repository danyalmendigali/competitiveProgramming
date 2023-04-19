#include <iostream>
using namespace std;

int main() {
        int size, m ,i;
        cin >> size;
        int *arr = new int[size];
        
        for (m = 0; m < size; m++) {
            cin >> arr[m];   
        }
        
        for(m = 0; m < size; m++) {
        	cout << arr[m] << " ";
        	for(i = m + 1; i < size; i++) {
        		if(arr[m] == arr[i]) {
        			for(int k = i; k < size - 1; k++) {
        				arr[k] = arr[k + 1];
					}
					size--;
				}
			}
		}
		     
	
	
	
	
	
	return 0;
}
