#include "Candidate.h"
#include "TestCandidate.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    TestCandidate x;
    cout << "Nhap so luong thi sinh: ";
    x.Nhap();
    x.Xuat();

    system("pause");
    return 0;
}