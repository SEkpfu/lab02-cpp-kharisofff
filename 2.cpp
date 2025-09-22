#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, r;
    cin >> x;
    if (x >= -2.5 && x <= 2.5)
        r = 1.0 / 2.0 * pow(x, 4);
    else if (x > 2.5)
        r = pow(2 * x + 1, 1.0 / 2.0);
    else 
        r = sin(M_PI * abs(x) / (x - 3));
    cout << r << endl;
    return 0;
}