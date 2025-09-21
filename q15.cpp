#include<iostream>
using namespace std;

class Triangle {
public:
    int a, b, c;

    void type() {
        if(a == b && b == c)
            cout << "Equilateral" << endl;
        else if(a == b || b == c || a == c)
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    }
};

int main() {
    Triangle obj;

    cout << "Enter three sides: ";
    cin >> obj.a >> obj.b >> obj.c;

    obj.type();

    return 0;
}
