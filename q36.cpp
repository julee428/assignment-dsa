#include<iostream>
using namespace std;

class CoPrime {
public:
    int a, b;

    void check() {
        int x = a, y = b;
        while(y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        if(x == 1) cout << "Co-prime" << endl;
        else cout << "Not Co-prime" << endl;
    }
};

int main() {
    CoPrime obj;
    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;
    obj.check();
    return 0;
}
