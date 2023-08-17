#include <vector>
#include <iostream>

using namespace std;

// 3-й этап Республиканской олимпиады по информатике 2021-2022, 2 тура

int main() {
    cin.tie(0);
    cout.tie(0);


    int size_men;
    cin >> size_men;
    vector<int> men(size_men);
    for(int i = 0; i < size_men; i++)
    {
        cin >> men[i];
    }

    int p = men[0], b = 0;
    for(int i = 1; i < size_men; i++)
    {
        if(men[i] < p)
        {
            b++;
        }
        else
        {
            p = men[i];
        }
    }

    cout << b;


    return 0;
}
