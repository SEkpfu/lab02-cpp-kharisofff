#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    setlocale(0, "");
    double a1, b1, a2, b2, a3, b3;
    cout << "Введите стороны 1-го прямоугольника: ";
    cin >> a1 >> b1;
    cout << "Введите стороны 2-го прямоугольника: ";
    cin >> a2 >> b2;
    cout << "Введите стороны 3-го прямоугольника: ";
    cin >> a3 >> b3;
    double s1 = a1 * b1;
    double s2 = a2 * b2;
    double s3 = a3 * b3;
    // а) через if
    if (s1 > s2 && s1 > s3)
        cout << "а) max площадь у первого = " << s1 << endl;
    else if (s2 > s1 && s2 > s3)
        cout << "а) max площадь у второго = " << s2 << endl;
    else
        cout << "а) max площадь у третьего = " << s3 << endl;
    // b) через тернарный оператор
    double max12 = (s1 > s2 ? s1 : s2);
    double max123 = (max12 > s3 ? max12 : s3);
    cout << "б) max площадь = " << max123 << endl;
    // c) через функцию max()
    cout << "max площадь = " << max(max(s1, s2), s3) << endl;
    return 0;
}