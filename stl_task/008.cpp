#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    vector <int> myVector; // �������� ������� ������� �����

    cout << "������: " << myVector.size() << endl; // ���������� �������� ������ ������� v.
    for(int i = 0; i < 10; i++) {
        myVector.push_back(i); // �������� �������� � ����� �������, � ������ ������� ����� �� ������������� �������������.
    }

    cout << "������� ����������:\n";
    cout << "����� ������: " << myVector.size() << endl; // ���������� ������� ������ ������� v.

    for(int i = 0; i < myVector.size(); i++) { // ���������� ���������� �������.
        cout << myVector[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
        myVector.push_back(i + 10); //  �������� � ����� ������� ����� ��������, � ������ ������� ����� �� ������������� �������������
    }

    cout << "����� ������: " << myVector.size() << endl; // ���������� ������� ������ ������� v.
    cout << "������� ����������:\n";

    for(int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < myVector.size(); i++) {
        myVector[i] = myVector[i] + myVector[i];
    }

    cout << "���������� �������: \n";

    for(int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;












    return 0;
}
