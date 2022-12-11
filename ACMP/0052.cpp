#include <iostream>
using namespace std;

int main() {
        int a, b, c, d, e, f, g, h, k;
        cin >> a;
        
        b = a / 100000; //  3
        c = (a % 100000) / 10000; // 8
        d =  ((a % 100000)  % 10000) / 1000; // 5
        e = (((a % 100000)  % 10000)  % 1000) / 100; // 9
        f =  ((((a % 100000)  % 10000)  % 1000) % 100) / 10; // 1 
        g = (((((a % 100000)  % 10000)  % 1000) % 100) % 10); // 6
        h = b + c + d ;
        k = e + f + g ;
        
        if (  h == k) cout << "YES";
        else cout << "NO";


        return 0;
    }
