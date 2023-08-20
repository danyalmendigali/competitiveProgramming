#include <vector>
#include <iostream>

using namespace std;

// 3-й этап Республиканской олимпиады по информатике 2021-2022, 2 тура

int main() {
    cin.tie(0);
    cout.tie(0);

    int size_vector;
    cin >> size_vector;
    vector<int> men(size_vector);
    for(int i = 0; i < size_vector; i++)
    {
        cin >> men[i];
    }

    int p = men[0], b = 0;
    for(int i = 1; i < size_vector; i++)
    {
        if(men[i] > p)
        {
            p = men[i];
        }
        else
        {
            b++;
        }
    }

    cout << b;



    return 0;
}
