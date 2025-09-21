#include<iostream>
using namespace std;

class FibCheck {
public:
    int num;

    void check() {
        int a = 0, b = 1, c = 0;
        if(num == 0 || num == 1) {
            cout << "Yes" << endl;
            return;
        }
        while(c < num) {
            c = a + b;
            a = b;
            b = c;
        }
        if(c == num) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
};

int main() {
    FibCheck obj;
    cout << "Enter number: ";
    cin >> obj.num;
    obj.check();
    return 0;
}
