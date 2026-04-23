#include "CString.h"
#include <iostream>
using namespace std;

int main() {
    CString s1("Truong Dai hoc "), s2("Cong nghe Thong tin");
    cout << "s1 = " << s1 << "\ns2 = " << s2;
    CString s3;

    cout << "\nNhap CString s3: ";
    cin >> s3;
    cout << "Ten truong: " << s1 << s2;
    cout << "\ns3 = " << s3;

    CString s4 = s1 + s3;
    cout << "\ns1 + s3 = " << s4 << "\n";

    cout << "\nSo sanh s2 va s3:";
    if (s2 == s3) {
        cout << "\ns2 == s3";
    }
    if (s2 != s3) {
        cout << "\ns2 != s3";
    }
    if (s2 > s3) {
        cout << "\ns2 > s3";
    }
    if (s2 < s3) {
        cout << "\ns2 < s3";
    }
    if (s2 >= s3) {
        cout << "\ns2 >= s3";
    }
    if (s2 <= s3) {
        cout << "\ns2 <= s3";
    }
    cout << "\n";

    system("pause");
    return 0;
}