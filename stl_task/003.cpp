#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    cout << "������� ���������� ����� ������������������: ";
    int n;
    double l = 0.0;
    cin >> n;
    vector <double> myVector(n);

    cout << "������� ������������������: ";
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

    cout << "������� ��������������: " << l << endl;
    cout << "����������� �����: " << minVector << endl;
    cout << "������������ �����: " << maxVector << endl;








   return 0;
}
