#include<iostream>
using namespace std;

class Interest {
public:
    float p, r, t;

    void calculate() {
        float si = (p * r * t) / 100;
        cout << "Simple Interest: " << si << endl;
    }
};

int main() {
    Interest obj;

    cout << "Enter Principal, Rate and Time: ";
    cin >> obj.p >> obj.r >> obj.t;

    obj.calculate();

    return 0;
}
