#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
   cin.tie(0);
   setlocale(LC_ALL, "Russian");

   vector <string> MyVector_string;

   MyVector_string.push_back("груша");
   MyVector_string.push_back("апельсин");
   MyVector_string.push_back("яблоко");
   MyVector_string.push_back("банан");

   cout << "Размер нашего вектора: " << MyVector_string.size() << endl;
   cout << "Текущее содержание: ";

   for(int i = 0; i < MyVector_string.size(); i++) {
        cout << MyVector_string[i] << " ";
   }
   cout << endl;


   MyVector_string.pop_back();

   cout << "Размер нашего вектора после pop_back(): " << MyVector_string.size() << endl;
   cout << "Текущее содержание после pop_back(): ";
   for(int i = 0; i < MyVector_string.size(); i++) {
        cout << MyVector_string[i] << " ";
   }






















   return 0;
}


