#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;



    cout << "Введите 3 числа " << endl;
    cin >> a >> b >> c;

    cout << "Сумма трех чисел = " << a + b + c  << endl;

    cout << "Произведение трех чисел = "  << a * b * c << endl;

    cout << "Среднее арифметическое трех чисел  = "  << (double)(a + b + c) / 3 << endl;





    return 0;
}
