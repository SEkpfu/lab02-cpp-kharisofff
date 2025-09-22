#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M; 
    string dost;
    if (N >= 6 && N <= 10) {
        switch (N) {
            case 6: dost = "шестерка"; break;
            case 7: dost = "семерка"; break;
            case 8: dost = "восьмерка"; break;
            case 9: dost = "девятка"; break;
            case 10: dost = "десятка"; break;
        }
    } else {
        switch (N) {
            case 11: dost = "валет"; break;
            case 12: dost = "дама"; break;
            case 13: dost = "король"; break;
            case 14: dost = "туз"; break;
        }
    }
    string mast;
    switch (M) {
        case 1: mast = "пики"; break;
        case 2: mast = "треф"; break;
        case 3: mast = "бубны"; break;
        case 4: mast = "черви"; break;
    }
    cout << dost << " " << mast << endl;
    return 0;
}