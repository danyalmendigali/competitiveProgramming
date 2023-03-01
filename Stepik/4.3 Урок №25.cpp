#include <iostream>
using namespace std;
int main() {
  int n, k = 0, s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
      if( n % i == 0) {
          k++;
        s += i;
        }
}
       cout << k << endl << s; 
        
  return 0;
}
