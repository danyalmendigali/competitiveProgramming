#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
   cin.tie(0);
   setlocale(LC_ALL, "Russian");

   vector <string> MyVector_string;

   MyVector_string.push_back("�����");
   MyVector_string.push_back("��������");
   MyVector_string.push_back("������");
   MyVector_string.push_back("�����");

   cout << "������ ������ �������: " << MyVector_string.size() << endl;
   cout << "������� ����������: ";

   for(int i = 0; i < MyVector_string.size(); i++) {
        cout << MyVector_string[i] << " ";
   }
   cout << endl;


   MyVector_string.pop_back();

   cout << "������ ������ ������� ����� pop_back(): " << MyVector_string.size() << endl;
   cout << "������� ���������� ����� pop_back(): ";
   for(int i = 0; i < MyVector_string.size(); i++) {
        cout << MyVector_string[i] << " ";
   }






















   return 0;
}


