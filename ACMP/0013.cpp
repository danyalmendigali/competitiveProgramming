#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int a1, a2, a3, a4, b1, b2, b3, b4;
    a1 = a / 1000;
    a2 = a / 100 % 10;
    a3 = a / 10 % 10;
    a4 = a % 10;


    b1 = b / 1000;
    b2 = b / 100 % 10;
    b3 = b / 10 % 10;
    b4 = b % 10;

    vector<int> matrix_1;
    vector<int> matrix_2;

    matrix_1.push_back(a1);
    matrix_1.push_back(a2);
    matrix_1.push_back(a3);
    matrix_1.push_back(a4);

    matrix_2.push_back(b1);
    matrix_2.push_back(b2);
    matrix_2.push_back(b3);
    matrix_2.push_back(b4);



    int bulls = 0, cows = 0;
    if(a1 == b1)
    {
        bulls++;
    }
    if(a2 == b2)
    {
        bulls++;
    }
    if(a3 == b3)
    {
        bulls++;
    }
    if(a4 == b4)
    {
        bulls++;
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i != j && matrix_1[i] == matrix_2[j])
            {
                cows++;
            }
        }
    }

    cout << bulls << " " << cows;




}

int main() {


    solve();


    return 0;
}






