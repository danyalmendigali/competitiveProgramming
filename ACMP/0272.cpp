#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <fstream>
using namespace std;

int main() {
    cin.tie(0);
    ifstream fin("INPUT.TXT");

    int a, max, min;
    fin >> min >> max;
    for(int i = 3; fin >> a; i++)
    {
        if((i % 2 == 0) && (a > max)) max = a;
        if((i % 2 != 0) && (a < min)) min = a;
    }

    cout << min + max << "\n";

    fin.close();


    return 0;
}








