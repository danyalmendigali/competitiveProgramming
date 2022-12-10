#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int isDayNumber;
    cin >> isDayNumber;
    switch(isDayNumber)
    {
  case 1:
    cout << "Понедельник : 7:00 работа, 20:00 ужин" << endl;
    break;

     case 2:
    cout << "Понедельник : 8:00 работа, 20:00 ужин" << endl;
    break;

     case 3:
    cout << "Понедельник : 9:00 работа, 20:00 ужин" << endl;
    break;

     case 4:
    cout << "Понедельник : 10:00 работа, 20:00 ужин" << endl;
    break;

     case 5:
    cout << "Понедельник : 11:00 работа, 20:00 ужин" << endl;
    break;

     case 6:
    cout << "Понедельник : 10:00 работа, 20:00 ужин" << endl;
    break;

     case 7:
    cout << "Понедельник : 4:00 работа, 20:00 ужин" << endl;
    break;


    }








    return 0;
}
