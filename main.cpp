#include <iostream>
// Автор: Го Мин
// Группа: П-161
// Год: 2026
using namespace std;

int main()
{
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    int sum = a + b;
    int mult = a * b;
<<<<<<< HEAD
    cout << "Произведение чисел = " << mult << endl;
    cout << "Сумма = " << sum << endl;
=======
    double div = (double)a / b;
    cout << "Сумма = " << sum << endl;
    cout << "Произведение = " << mult << endl;
    cout << "Частное от деления = " << div << endl;
>>>>>>> division
    return 0;
}
