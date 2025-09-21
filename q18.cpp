#include<iostream>
using namespace std;

class Middle {
public:
    int a, b, c;

    void find() {
        if((a >= b && a <= c) || (a >= c && a <= b))
            cout << "Middle: " << a << endl;
        else if((b >= a && b <= c) || (b >= c && b <= a))
            cout << "Middle: " << b << endl;
        else
            cout << "Middle: " << c << endl;
    }
};

int main() {
    Middle obj;

    cout << "Enter three numbers: ";
    cin >> obj.a >> obj.b >> obj.c;

    obj.find();

    return 0;
}
