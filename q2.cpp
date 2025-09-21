#include<iostream>
using namespace std;

class Circle {
public:
    float radius;

    void circumference() {
        float c = 2 * 3.14 * radius;
        cout << "Circumference: " << c << endl;
    }
};

int main() {
    Circle obj;

    cout << "Enter radius: ";
    cin >> obj.radius;

    obj.circumference();

    return 0;
}
