#include<iostream>
using namespace std;

class Prime {
public:
    int n;

    void check() {
        bool flag = true;
        if(n < 2) flag = false;
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
};

int main() {
    Prime obj;
    cout << "Enter number: ";
    cin >> obj.n;
    obj.check();
    return 0;
}
