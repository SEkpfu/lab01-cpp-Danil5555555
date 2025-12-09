#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    const double PI = 3.141592653589793238463;
    double radius;
    cin >> radius;
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    cout << volume;
    return 0;
}
