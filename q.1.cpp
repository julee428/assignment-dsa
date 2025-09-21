#include<iostream>
using namespace std;

class Average {
public:
    int a, b, c;

    void calculate() {
        int avg = (a + b + c) / 3;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Average obj;

    cout << "Enter three numbers: ";
    cin >> obj.a >> obj.b >> obj.c;

    obj.calculate();

    return 0;
}
