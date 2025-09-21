#include<iostream>
using namespace std;

class Largest {
public:
    int a, b, c, d;

    void find() {
        int big = a;
        if(b > big) big = b;
        if(c > big) big = c;
        if(d > big) big = d;
        cout << "Largest: " << big << endl;
    }
};

int main() {
    Largest obj;

    cout << "Enter 4 numbers: ";
    cin >> obj.a >> obj.b >> obj.c >> obj.d;

    obj.find();

    return 0;
}
