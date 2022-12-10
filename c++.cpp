#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    float num_1, num_2, result;

    cout << "Enter num_1" << endl;
    cin >> num_1;
    cout << "Enter num_2" << endl;
    cin >> num_2;
    result = num_1 + num_2;
    cout << "Result is" << " ="  << " " << result << endl;
    result = num_1 - num_2;
    cout << "Result is" << " ="  << " " << result << endl;

    result = num_1 * num_2;
    cout << "Result is" << " ="  << " " << result << endl;

    result = num_1 / num_2;
    cout << "Result is" << " ="  << " " << result << endl;



    return 0;
}
