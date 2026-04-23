#include "INTEGER.h"
#include <iostream>
using namespace std;

int main() {
    INTEGER a, b = 10;
    cout << "Hay nhap gia tri a: ";
    cin >> a;
    cout << "Gia tri cua a: " << a << "\n";
    cout << "Gia tri cua b: " << b << "\n";

    INTEGER c = a + b;
    cout << "\na + b = " << c << "\n";
    c = a - b;
    cout << "a - b = " << c << "\n";
    c = a * b;
    cout << "a * b = " << c << "\n";
    c = a / b;
    cout << "a / b = " << c << "\n";
    c = a % b;
    cout << "a % b = " << c << "\n";

    cout << "\na * 5 = " << a * 5 << "\n";

    a += 10;
    cout << "a += 10  =>  a = " << a << "\n";
    a -= 10;
    cout << "a -= 10  =>  a = " << a << "\n";
    a *= 10;
    cout << "a *= 10  =>  a = " << a << "\n";
    a /= 10;
    cout << "a /= 10  =>  a = " << a << "\n";
    a %= 10;
    cout << "a %= 10  =>  a = " << a << "\n\n";

    if (a > b) {
        cout << "a > b\n";
    }
    if (a < b) {
        cout << "a < b\n";
    }
    if (a == b) {
        cout << "a = b\n";
    }

    cout << "\na ban dau: " << a;
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