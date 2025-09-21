#include<iostream>
using namespace std;

class LCM {
public:
    int a, b;

    void calc() {
        int big = (a > b) ? a : b;
        while(true) {
            if(big % a == 0 && big % b == 0) {
                cout << "LCM: " << big << endl;
                break;
            }
            big++;
        }
    }
};

int main() {
    LCM obj;
    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;
    obj.calc();
    return 0;
}
