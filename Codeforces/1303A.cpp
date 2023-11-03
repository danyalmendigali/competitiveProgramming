#include <iostream>
using namespace std;

const int INF = 1e9;
#define ll long long


int main() {
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int firstOne = -1; // позиция первой единицы
        int lastOne = -1;  // позиция последней единицы

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                if(firstOne == -1) {
                    firstOne = i;
                }
                lastOne = i; // обновляем каждый раз, когда встречаем единицу
            }
        }

        // Если нет единиц, ответ - 0
        if(firstOne == -1) {
            cout << "0\n";
            continue;
        }

        // Подсчитываем нули между первой и последней единицей
        int zerosCount = 0;
        for(int i = firstOne; i <= lastOne; i++) {
            if(s[i] == '0') {
                zerosCount++;
            }
        }

        cout << zerosCount << "\n";
    }





    return 0;
}
