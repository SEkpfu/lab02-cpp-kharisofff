#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    setlocale(0, "");
    int a,b,c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    // а)
    int sum = 0;
    if (a > 10) sum += a;
    if (b > 10) sum += b;
    if (c > 10) sum += c;
    cout << "а) Сумма чисел >10: " << sum << endl;
    // б) 
    int count = 0;
    if (a % 2 ==0) count++;
    if (b % 2 ==0) count++;
    if (c % 2 ==0) count++;
    cout << "б) Количество четных: " << count << endl;
    // в) 
    int maxv = max({a,b,c});
    int minv = min({a,b,c});
    int mid = a + b + c - maxv - minv;
    cout << "в) Среднее число: " << mid << endl;
    // г)
    if (a == minv) cout << "г) Наименьшее число под номером 1" << endl;
    else if (b == minv) cout << "г) Наименьшее число под номером 2" << endl;
    else cout << "г) Наименьшее число под номером 3" << endl;

    return 0;
}