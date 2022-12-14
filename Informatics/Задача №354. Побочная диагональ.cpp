#include <bits/stdc++.h>
using namespace std;
int main()
{
	
    int n;
    cin >> n;
    int a[n][n];
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - i - 1; ++j)
        a[i][j] = 0;
        a[i][n - i - 1] = 1;
        
		for(int j = n - i; j < n; ++j)
            a[i][j] = 2;
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    
    
    return 0;
}
