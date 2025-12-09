#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c;
    cout << "Введите длину ребра a: ";
    cin >> a;
    cout << "Введите длину ребра b: ";
    cin >> b;
    cout << "Введите длину ребра c: ";
    cin >> c;

    double V = a * b * c;
    double S = 2 * (a * b + b * c + a * c);

    cout << "Объем: " << V << endl;
    cout << "Площадь поверхности: " << S;

    return 0;
}
