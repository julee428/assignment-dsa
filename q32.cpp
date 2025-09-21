#include<iostream>
using namespace std;

class FibNth {
public:
    int n;

    void calc() {
        int a = 0, b = 1, c;
        if(n == 1) cout << "Nth term: " << a << endl;
        else if(n == 2) cout << "Nth term: " << b << endl;
        else {
            for(int i = 3; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            cout << "Nth term: " << b << endl;
        }
    }
};

int main() {
    FibNth obj;
    cout << "Enter N: ";
    cin >> obj.n;
    obj.calc();
    return 0;
}
