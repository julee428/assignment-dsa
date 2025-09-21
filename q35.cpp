#include<iostream>
using namespace std;

class HCF {
public:
    int a, b;

    void calc() {
        int x = a, y = b;
        while(y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        cout << "HCF: " << x << endl;
    }
};

int main() {
    HCF obj;
    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;
    obj.calc();
    return 0;
}
