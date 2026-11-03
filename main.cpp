#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    int sum = a + b;
    int mult = a * b;
    int diff = a - b; // 新增：差值
    double div = (double)a / b;

    cout << "Сумма = " << sum << endl;
    cout << "Произведение = " << mult << endl;
    cout << "Разность = " << diff << endl; // 新增打印差
    cout << "Частное = " << div << endl;

    return 0;
}
