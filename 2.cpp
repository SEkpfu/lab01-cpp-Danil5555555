#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, sum, rzn, prz;
    cout << "Введите 2 числа: \n";
    cin >> a >> b;
    sum = a+b;
    rzn = a-b;
    prz = a*b;
    cout << "Сумма чисел: " << sum << endl << "Разность чисел: " << rzn << endl << "Произведение чисел: " << prz << endl;

    return 0;
}
