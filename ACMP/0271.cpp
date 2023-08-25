#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



int main() {

    int n;
    cin >> n;

    vector<long long int> fibonacci(1000000);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < 1000000; i++)
    {
        fibonacci[i] = fibonacci[i - 2] +  fibonacci[i - 1];
    }

    int b = 1;
    for(int i = 0; i < fibonacci.size(); i++)
    {
        if (fibonacci[i] == n)
        {
            cout << "1" << "\n";
            cout << i << "\n";
            b = 0;
            return false;
        }
    }

    if(b == 1)
    {
        cout << "0" << "\n";
    }



    return 0;
}







