#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    float a, b, c, d;
    cout << "Расстояние до дачи (км): ";
    cin >> a;
    cout << "Расход бензина (литров на 100 км пробега): ";
    cin >> b;
    cout << "Цена литра бензина (руб.):";
    cin >> c;
    d = ((a % 100) * b) * c;
    cout << "Поездка на дачу и обратно обойдется в " << d << "руб.";









    return 0;
}
