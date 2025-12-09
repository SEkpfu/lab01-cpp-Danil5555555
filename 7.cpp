#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;

    int last_a = a % 10;
    int last_b = b % 10;
    int sum = last_a + last_b;

    cout << "Сумма последних цифр: " << sum;

    return 0;
}
