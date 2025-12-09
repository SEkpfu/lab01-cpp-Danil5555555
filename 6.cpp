#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double radius, height;
    cout << "Введите радиус: ";
    cin >> radius;
    cout << "Введите высоту: ";
    cin >> height;

    double volume = M_PI * radius * radius * height;
    double S = 2 * M_PI * radius * (radius + height);

    cout << "Объем цилиндра: " << volume << endl;
    cout << "Площадь поверхности: " << S;

    return 0;
}
