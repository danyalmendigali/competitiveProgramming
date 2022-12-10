#include <iostream>
using namespace std;

/*
    switch ( выражения )
    case значение1;
        действие1;
           break;

*/
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;

    switch (a)
    {

     case 1:
            cout << "Вы ввели 1" << endl;
        break;


    case 2:
            cout << "Вы ввели 2" << endl;
        break;

    default:
        cout  << "Я не знаю этого числа  " << endl;
        break;
    }

    return 0;
}

