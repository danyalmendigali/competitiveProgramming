#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    cin.tie(0);
    vector <char> myVector;

    for(int i = 0; i < 10; i++) {
        myVector.push_back('A' + i); // // �������� �������� � ������.
    }


    for(int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " "; // �������� ������ � ����������� ������� � ������� �������.
    }
    cout << endl;



    vector <char>::iterator p = myVector.begin(); //�������� ������ � ����������� ������� � ������� ���������.
    while(p != myVector.end()) {
        cout << *p << " ";
        p++;
    }











   return 0;
}

