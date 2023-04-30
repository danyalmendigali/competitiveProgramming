#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов в первом и втором векторе: ";
    cin >> n;
    vector <int> myVector_1(n);
    vector <int> myVector_2(n);
    vector <int> myVector_3;

    cout << "Введите элементы первого вектора: ";
    for(int i = 0; i < n; i++) {
        cin >> myVector_1[i];
    }
    cout << "Введите элементы второго вектора: ";
    for(int i = 0; i < n; i++) {
        cin >> myVector_2[i];
    }

   for(int i = 0; i < n; i++) {
        myVector_3.push_back(myVector_1[i]);
   }

   for(int i = 0; i < n; i++) {
        myVector_3.push_back(myVector_2[i]);
   }

   sort(myVector_3.begin(), myVector_3.end());




   for(int i = 0; i < n * 2; i++) {
   	    cout << myVector_3[i] << " ";
   }












   return 0;
}
