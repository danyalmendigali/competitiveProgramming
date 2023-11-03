#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;




int main()
{
    cin.tie(0);

    vector<string> matrix(3);
    for(int i = 0; i < 3; i++) {
        cin >> matrix[i];
    }

    for(char ch : {'X', 'O'}) {
        for(int i = 0; i < 3; i++) {
            if(matrix[i][0] == ch && matrix[i][1] == ch && matrix[i][2] == ch) {
                cout << (ch == 'X' ? "Win" : "Lose") << endl;
                return 0;
            }
            if(matrix[0][i] == ch && matrix[1][i] == ch && matrix[2][i] == ch) {
                cout << (ch == 'X' ? "Win" : "Lose") << endl;
                return 0;
            }
        }

        if(matrix[0][0] == ch && matrix[1][1] == ch && matrix[2][2] == ch) {
            cout << (ch == 'X' ? "Win" : "Lose") << endl;
            return 0;
        }

        if(matrix[0][2] == ch && matrix[1][1] == ch && matrix[2][0] == ch) {
            cout << (ch == 'X' ? "Win" : "Lose") << endl;
            return 0;
        }
    }

    cout << "Draw" << "\n";



    return 0;
}


