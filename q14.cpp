#include<iostream>
using namespace std;

class Numbers {
public:
    int a, b;

    void check() {
        if(b == 0)
            cout << "Division by zero not possible" << endl;
        else if(a % b == 0)
            cout << "Divisible" << endl;
        else
            cout << "Not Divisible" << endl;
    }
};

int main() {
    Numbers obj;

    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;

    obj.check();

    return 0;
}
