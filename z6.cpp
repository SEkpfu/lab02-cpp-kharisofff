#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int x;
    cout << "Введите оценку: ";
    cin >> x;
    switch(x) {
        case 5: cout << "а) отлично"; break;
        case 4: cout << "а) хорошо"; break;
        case 3: cout << "а) удовлетворительно"; break;
        case 2:
        case 1: cout << "а) плохо"; break;
        default: cout << "а) неверные данные";
    }
    return 0;
}