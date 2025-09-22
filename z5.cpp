#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double r, a, b, z, c;
    cout << "Введите радиус торта: ";
    cin >> r;
    cout << "Введите стороны коробки a и b: ";
    cin >> a >> b;
    cout << "Введите высоту торта и высоту коробки: ";
    cin >> z >> c;
    // а)
    if (2*r <= a && 2*r <= b)
        cout << "а) Торт поместится по основанию\n";
    else
        cout << "а) Торт не поместится по основанию\n";

    if (2*r <= a && 2*r <= b && z <= c)
        cout << "а) Торт полностью поместится в коробку\n";
    else
        cout << "а) Торт полностью не поместится\n";
    // б)
    double x,y,Z,A,B;
    cout << "Введите размеры кирпича X Y Z: ";
    cin >> x >> y >> Z;
    cout << "Введите размеры отверстия a b: ";
    cin >> A >> B;
    if ((x <= A && y <= B) || (x <= B && y <= A) ||
        (x <= A && Z <= B) || (x <= B && Z <= A) ||
        (y <= A && Z <= B) || (y <= B && Z <= A))
        cout << "б) Кирпич пройдет" << endl;
    else
        cout << "б) Кирпич не пройдет" << endl;
    return 0;
}