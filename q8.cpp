#include<iostream>
using namespace std;

class Chars {
public:
    char a, b, c;

    void show() {
        cout << a << " = " << int(a) << endl;
        cout << b << " = " << int(b) << endl;
        cout << c << " = " << int(c) << endl;
    }
};

int main() {
    Chars obj;

    cout << "Enter 3 characters: ";
    cin >> obj.a >> obj.b >> obj.c;

    obj.show();

    return 0;
}
