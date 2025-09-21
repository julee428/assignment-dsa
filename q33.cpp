#include<iostream>
using namespace std;

class FibSeries {
public:
    int n;

    void print() {
        int a = 0, b = 1, c;
        if(n >= 1) cout << a << " ";
        if(n >= 2) cout << b << " ";
        for(int i = 3; i <= n; i++) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
};

int main() {
    FibSeries obj;
    cout << "Enter N: ";
    cin >> obj.n;
    obj.print();
    return 0;
}
