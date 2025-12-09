#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите четырехзначное число: ";
    cin >> n;

    int first_d = n / 1000;
    int last_d = n % 10;

    cout << "Первая цифра: " << first_d << endl;
    cout << "Последняя цифра: " << last_d;

    return 0;
}
