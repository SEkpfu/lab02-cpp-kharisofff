#include <iostream>
using namespace std;
int main() {
    double x, y;
    cout << "Введите x, y: "; cin >> x >> y;
    if ((x * x + y * y <= 100 && y <= 0 && y >= -5) || (x >= -5 && x <= 0 &&  y >= 0 && y <= 10) || (x >= 0 && y >= 0 && y <= -x + 10)){
        cout << "Точка попала в заштрихованную область" << endl;
    }
    else{
        cout << "Точка не попала в заштрихованную область" << endl;
    }
    return 0;
}