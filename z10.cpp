#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double x,y,z;
    cout << "Введите стороны треугольника: ";
    cin >> x >> y >> z;
    // а) проверка существования
    if (x+y>z && x+z>y && y+z>x) {
        cout << "а) Треугольник существует" << endl;
        // б) типы треугольников
        if (x==y && y==z)
            cout << "б) Равносторонний" << endl;
        else if (x==y || x==z || y==z)
            cout << "б) Равнобедренный" << endl;
        if ((x * x + y * y == z * z) || (x * x + z * z == y * y) || (y * y + z * z == x * x))
            cout << "б) Прямоугольный" << endl;
    } else {
        cout << "а) Треугольник не существует" << endl;
    }
    return 0;
}