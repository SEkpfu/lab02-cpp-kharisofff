#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x;
    cout <<"Введите x: " << endl;
    cin >> x;
//a)
    if(x <= -2) 
        cout << "1) f(x)= "<< 0 << endl;
    else if(x>10) 
        cout << "1) f(x)= "<< 1/((x * x) + 4 * x - 5) << endl;
    else 
        cout << "1) f(x)=" << (x * x) + 4 * x + 5 << endl;
//b)
    if ((x * x) + 4 * x - 5 == 0) 
        cout << "Не числовое";
    else if (x <= -2) 
        cout << "2) f(x)=" << 0 << endl;
    else if (x > 0) 
        cout << "2)f(x)=" << 1 / ((x * x) + 4 * x - 5);
    else 
        cout <<"2) f(x)=" << (x * x) + 4 * x + 5;
return 0;
}