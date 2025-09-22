#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int x;
    cout << "Введите число: ";
    cin >> x;
    // а)
    if (x > 0)
        cout << "а) Число положительное" << endl;
    else if (x < 0)
        cout << "а) Число отрицательное" << endl;
    else
        cout << "а) Число равно нулю" << endl;
    // б)
    if (x % 2 == 0)
        cout << "б) Число четное" << endl;
    else
        cout << "б) Число нечетное" << endl;

    return 0;
}