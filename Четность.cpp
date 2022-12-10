#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "¬ведите число дл€ проверки на четность: ";
    cin >> a;

    if (a%2==0)
    {
        cout << "„исло " <<a<< " четное!" << endl;
    }
    else
    {
        cout << "„исло " <<a<< " не четное!" << endl;
    }

    return 0;
}
