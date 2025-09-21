#include<iostream>
using namespace std;

class PrimeRange {
public:
    int a, b;

    void print() {
        for(int i = a; i <= b; i++) {
            if(i < 2) continue;
            bool flag = true;
            for(int j = 2; j*j <= i; j++) {
                if(i % j == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    PrimeRange obj;
    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;
    obj.print();
    return 0;
}
