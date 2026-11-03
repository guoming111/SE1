// Данная программа является учебной
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    int sum = a + b;
    int mult = a * b;
<<<<<<< HEAD
    int diff = a - b; // 新增：差值
=======
    int diff = a - b;
>>>>>>> daa651f (Добавлен комментарий об учебном характере программы)
    double div = (double)a / b;

    cout << "Сумма = " << sum << endl;
    cout << "Произведение = " << mult << endl;
<<<<<<< HEAD
    cout << "Разность = " << diff << endl; // 新增打印差
=======
    cout << "Разность = " << diff << endl;
>>>>>>> daa651f (Добавлен комментарий об учебном характере программы)
    cout << "Частное = " << div << endl;

    return 0;
}
