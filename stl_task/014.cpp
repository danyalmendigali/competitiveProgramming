#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    vector <string> langs = {"Python", "C++", "C", "Java", "C#"};
    auto result = find_if(begin(langs), end(langs), [](const string& lang) { return lang[0] == 'C'; // Лямбда-выражения
    });
    cout << *result << endl;













   /*    ------::const_iterator------
   vector <int> v;
   for(int i = 0; i < 5; i++) {
    v.push_back(i);
   }
   vector <int>::const_iterator it;
   it = v.begin();
   while(it != v.end()) {
     cout << *it << " ";
     it++;
    }
    */

   /*    ------swap()------
   vector <string> MyStringVector_1 { "C++", "C#", "Java" };
   vector <string> MyStringVector_2 { "JavaScript", "Python", "PHP"};

   MyStringVector_1.swap(MyStringVector_2);

   for(string i : MyStringVector_1) {
    cout << i << " ";
   }
   */


   /*    ------empty()------
   int n;
   cin >> n;
   vector <int> v (n);
   for(int i = 1; i <= 3; i++) {
        v.push_back(i);
   }

   v.clear();
   if(v.empty()) {
        cout << "Ваш вектор пуст!" << endl;
   }
   else
     cout << "Ваш вектор не пуст!" << endl;
   */



   /*    ------erase()------
   int n;
   cin >> n;
   vector <int> v (n);

   for(int i = 0; i < n; i++) {
        cin >> v[i];
   }



   v.erase(v.begin() + 2, v.end()); // удаление элементов вектора с v.begin() + 2 до v.end()

   for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
   }
   *?




   /*    ------push_back()------
   vector <int> numbers;
   numbers.push_back(3); // добавление элементов
   numbers.push_back(7);
   numbers.push_back(10);

   for(int n : numbers) {
      cout << n << " "; // вывод элементов
   }
   */



   return 0;
}



