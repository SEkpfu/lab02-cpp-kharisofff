#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int d1,m1,y1, d2,m2,y2;
    cout << "Введите день, месяц, год рождения: ";
    cin >> d1 >> m1 >> y1;
    cout << "Введите текущую дату: ";
    cin >> d2 >> m2 >> y2;
    int age = y2 - y1;
    if (m2 < m1 || (m2 == m1 && d2 < d1))
        age--;
    cout << "а) Вам " << age << " ";
    if (age % 10 == 1 && age % 100 != 11) cout << "год";
    else if ((age % 10 >= 2 && age % 10 <= 4) && !(age % 100 >= 12 && age % 100 <= 14)) cout << "года";
    else cout << "лет";

    return 0;
}