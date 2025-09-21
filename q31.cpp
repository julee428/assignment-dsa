#include<iostream>
using namespace std;

class Reverse {
public:
    int n;

    void calc() {
        int rev = 0, temp = n;
        while(temp > 0) {
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        cout << "Reverse: " << rev << endl;
    }
};

int main() {
    Reverse obj;
    cout << "Enter number: ";
    cin >> obj.n;
    obj.calc();
    return 0;
}
