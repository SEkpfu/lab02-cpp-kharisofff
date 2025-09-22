#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты попадания: ";
    cin >> x >> y;
    double r = sqrt(x * x + y * y);
    if (r <= 1)
        cout << "а) 10 очков" << endl;
    else if (r <= 2)
        cout << "а) 5 очков" << endl;
    else
        cout << "а) 0 очков" << endl;
    return 0;
}