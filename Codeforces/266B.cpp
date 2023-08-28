#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {


    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < s.size() - 1; i++)
        {
            if(s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }

    cout << s;





    return 0;
}
