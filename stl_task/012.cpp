#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
   cin.tie(0);
   setlocale(LC_ALL, "Russian");
   vector <int> myVector;
   cout << "������ �������: " << myVector.size() << endl;

   for(int i = 1; i <= 20; i++) {
      myVector.push_back(i);
   }

   cout << "������ �������: " << myVector.size() << endl;

   for(int i = 0; i < myVector.size(); i++) {
    cout << myVector[i] << " ";
   }
   cout << endl;

   vector <int>::iterator p = myVector.begin();
   p += 3;
   myVector.insert(p, 10, 3);

   cout << "������ �������: " << myVector.size() << endl;

   for(int i = 0; i < myVector.size(); i++) {
    cout << myVector[i] << " ";
   }
   cout << endl;



   myVector.erase(p, p + 10);
   cout << "������ �������: " << myVector.size() << endl;
   cout << "������� ����������: ";

   for(int i = 0; i < myVector.size(); i++) {
      cout << myVector[i] << " ";
   }

   cout << endl;
















   return 0;
}

