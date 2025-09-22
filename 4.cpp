#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Введите кол-во столов: " << endl;
    cin >> a;
    string eend;
    int ld, lds;
    ld = a % 10;
    lds = a % 100;
    if (lds >= 11 && lds <= 14)
        eend = "ов";
    else if (ld == 1)
        eend = "";
    else if (ld >= 2 && ld <= 4)
        eend = "а";
    else
        eend = "ов";
    cout << "В драке сломали " << a << " стол" << eend << endl;
    return 0;
}
