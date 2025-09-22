#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты x y: ";
    cin >> x >> y;
    // а)
    if (x >= -2 && x <= 0 && y >= 0 && y <= 1)
        cout << "а) Принадлежит" << endl;
    else
        cout << "а) Не принадлежит" << endl;
    // б)
    if (x * x + y * y <= 25 && y >= 0)
        cout << "б) Принадлежит" << endl;
    else
        cout << "б) Не принадлежит" << endl;
    // в) 
    if (x * x + y * y >= 9 && x * x + y * y <= 36 && x >= 0)
        cout << "в) Принадлежит" << endl;
    else
        cout << "в) Не принадлежит" << endl;
    // г) 
    if (x >= 0 && x <= 1 && y >= 0 && y <= -2 * x + 2)
        cout << "г) Принадлежит" << endl;
    else
        cout << "г) Не принадлежит" << endl;
    return 0;
}