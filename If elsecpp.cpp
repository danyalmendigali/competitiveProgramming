#include <iostream>
using namespace std;

/*
     Конструкция логического выбора if
     Лесенка if - else if
*/

int main ()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if (a>5) {
        cout << "Число больше пяти" << endl;
    }
    else if (a==5) {
        cout << "Ваше число равно пяти" << endl;
    }
    else {
        cout << "Число меньше пяти" << endl;
    }






    return 0;
}
