#include<iostream>
using namespace std;

class Digits {
public:
    int n;

    void count() {
        int c = 0, temp = n;
        while(temp > 0) {
            c++;
            temp /= 10;
        }
        cout << "Digits: " << c << endl;
    }
};

int main() {
    Digits obj;
    cout << "Enter number: ";
    cin >> obj.n;
    obj.count();
    return 0;
}
