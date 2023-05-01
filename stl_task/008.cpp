#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    vector <int> myVector; // создание вектора нулевой длины

    cout << "Размер: " << myVector.size() << endl; // Отображаем исходный размер вектора v.
    for(int i = 0; i < 10; i++) {
        myVector.push_back(i); // Помещаем значения в конец вектора, и размер вектора будет по необходимости увеличиваться.
    }

    cout << "Текущее содержимое:\n";
    cout << "Новый размер: " << myVector.size() << endl; // Отображаем текущий размер вектора v.

    for(int i = 0; i < myVector.size(); i++) { // Отображаем содержимое вектора.
        cout << myVector[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
        myVector.push_back(i + 10); //  Помещаем в конец вектора новые значения, и размер вектора будет по необходимости увеличиваться
    }

    cout << "Новый размер: " << myVector.size() << endl; // Отображаем текущий размер вектора v.
    cout << "Текещее содержимое:\n";

    for(int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < myVector.size(); i++) {
        myVector[i] = myVector[i] + myVector[i];
    }

    cout << "Содержимое удвоено: \n";

    for(int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;












    return 0;
}
