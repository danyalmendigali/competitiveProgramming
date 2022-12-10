#include <iostream>
using namespace std;

// -- это  декремент
// ++ это инкремент

int main()
{
    int a = 1, b;

    b =  ++a * a++;
    cout << b << endl;
    cout << a  << endl;

    return 0;
}
