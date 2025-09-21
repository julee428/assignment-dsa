#include<iostream>
using namespace std;

class Armstrong {
public:
    int n;

    void check() {
        int temp = n, sum = 0;
        while(temp > 0) {
            int d = temp % 10;
            sum += d*d*d;
            temp /= 10;
        }
        if(sum == n) cout << "Armstrong" << endl;
        else cout << "Not Armstrong" << endl;
    }
};

int main() {
    Armstrong obj;
    cout << "Enter number: ";
    cin >> obj.n;
    obj.check();
    return 0;
}
