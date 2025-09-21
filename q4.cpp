#include<iostream>
using namespace std;

class Cuboid {
public:
    float l, b, h;

    void volume() {
        float v = l * b * h;
        cout << "Volume: " << v << endl;
    }
};

int main() {
    Cuboid obj;

    cout << "Enter length, breadth and height: ";
    cin >> obj.l >> obj.b >> obj.h;

    obj.volume();

    return 0;
}
