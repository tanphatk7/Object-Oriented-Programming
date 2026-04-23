#include "CDate.h"
#include <iostream>
using namespace std;

int main() {
    CDate a, b;
    do {
        cout << "Hay nhap ngay thang nam A: ";
        cin >> a;
        cout << "\n";
    } while (!a.isValidDate());
    do {
        cout << "Hay nhap ngay thang nam B: ";
        cin >> b;
        cout << "\n";
    } while (!b.isValidDate());

    cout << "\nKhoang cach A va B: " << a - b << " ngay" << "\n";

    CDate c = a + 5;
    cout << "A cong them 5 ngay: " << c << "\n";

    c = a - 10;
    cout << "A tru di 10 ngay: " << c << "\n";

    cout << "\nA ban dau: " << a;
    c = a;
    cout << "\n++a => cout = " << ++c << "\na = " << c;
    c = a;
    cout << "\na++ => cout = " << c++ << "\na = " << c << "\n";

    c = a;
    cout << "\n--a => cout = " << --c << "\na = " << c;
    c = a;
    cout << "\na-- => cout = " << c-- << "\na = " << c << "\n";

    system("pause");
    return 0;
}