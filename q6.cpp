#include<iostream>
using namespace std;

class ASCII {
public:
    char ch;

    void show() {
        cout << "ASCII: " << int(ch) << endl;
    }
};

int main() {
    ASCII obj;

    cout << "Enter a character: ";
    cin >> obj.ch;

    obj.show();

    return 0;
}
