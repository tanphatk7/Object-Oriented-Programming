#include <iostream>
using namespace std;

class Hello {
public:
    Hello() {
        cout << "Entering the Hello program saying...\n";
    }
    ~Hello() {
        cout << "Then exiting...\n";
        system("pause");
    }
};

Hello A;

void main() {
    cout << "Hello, world.\n";
}
