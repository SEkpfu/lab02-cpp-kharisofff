#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    double a, b;
    char op;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Введите операцию (+ - * /): ";
    cin >> op;
    switch(op) {
        case '+': cout << "а) " << a + b; break;
        case '-': cout << "а) " << a - b; break;
        case '*': cout << "а) " << a * b; break;
        case '/':
            if (b != 0) cout << "а) " << a/b;
            else cout << "а) Деление на ноль";
            break;
        default: cout << "а) Неизвестная операция";
    }
    return 0;
}