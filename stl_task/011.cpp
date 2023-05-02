#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
   cin.tie(0);
   setlocale(LC_ALL, "Russian");
   vector <char> v;

    for(int i = 0; i < 10; i++) {
        v.push_back('A' + i);
   }

    cout << "Размер: " << v.size() << endl;
    cout << "Исходное содержимое вектора:\n";

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
   }

    cout << endl;

    vector <char>::iterator p = v.begin();
    p += 2;

    v.insert(p, 10, 'X'); // Добавили элементы  в вектор. Tри параметра v.insert(откуда начинаем, сколько элеметов хотим добавить, какой элемент)

    cout << "Размер ветора после вставки: " << v.size() << endl;

    cout << "Содержимое вектора после вставки:\n";
   for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
   }
   cout << endl;

    p = v.begin();
    p += 2;
    v.erase(p, p + 10);


    cout << "Размер вектора после удаления символов = " << v.size() << endl;

    cout << "Содержимое вектора после удаления символов:\n";
   for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
   }

    cout << endl;










   return 0;
}
