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

    v.insert(p, 10, 'X');













   return 0;
}

