#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int dM, dW;
    cout << "Введите число месяца: ";
    cin >> dM;
    cout << "Введите номер дня недели (1-7): ";
    cin >> dW;
    // а) проверка для 13-го числа (вторник/пятница)
    // б) добавлена проверка "пятница, 17-е" для Италии
    if ((dM == 13 && (dW == 5 || dW == 2)) || (dM == 17 && dW == 5))
        cout << "Неудачный день!\n";
    return 0;
}