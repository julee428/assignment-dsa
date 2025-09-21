#include<iostream>
using namespace std;

class Character {
public:
    int code;

    void show() {
        cout << "Character: " << char(code) << endl;
    }
};

int main() {
    Character obj;

    cout << "Enter ASCII code: ";
    cin >> obj.code;

    obj.show();

    return 0;
}
