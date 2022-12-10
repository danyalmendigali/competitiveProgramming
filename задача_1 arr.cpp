#include <iostream>
using namespace std;

int main() {
	const int size  = 50;
	int mas[size];
	for (int i = 0; i < size; i++ ) {
		mas[i]=rand() % 99 + 1;
		if(mas[i] % 2 != 0){
			i++;
		}
	}
	for(int j=0; j<size; j++) {
		
		cout << mas[j] << ' '; 
	}
	
	
	return 0;
}
