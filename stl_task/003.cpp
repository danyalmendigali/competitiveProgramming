#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество чисел последовательности: ";
    int n;
    double l = 0.0;
    cin >> n;
    vector <double> myVector(n);

    cout << "Введите последовательность: ";
    for(int i = 0; i < n; i++) {
        cin >> myVector[i];
        l += myVector[i];
    }
    double maxVector = myVector[0];
    double minVector = myVector[0];

    for(int i = 0; i < n; i++) {
        if(maxVector <= myVector[i]) {
            maxVector = myVector[i];
        }
        if(minVector >= myVector[i]) {
            minVector = myVector[i];
        }
    }

    l /= n;

    cout << "Среднее арифметическое: " << l << endl;
    cout << "Минимальное число: " << minVector << endl;
    cout << "Максимальное число: " << maxVector << endl;








   return 0;
}
