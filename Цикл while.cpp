#include <iostream>
using namespace std;

/*  while (утверждение)
    {
        действия для повторения;
    }
*/

int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 10;

    while (a<20)
    {
        cout << "Переменная а = " << a << endl;
        a++;

    }



    //cout << "Текст вывелся на экран"<< endl;


    return 0;
}
