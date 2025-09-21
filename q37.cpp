#include<iostream>
using namespace std;

class Prime100 {
public:
    void print() {
        for(int i = 2; i < 100; i++) {
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
    Prime100 obj;
    obj.print();
    return 0;
}
