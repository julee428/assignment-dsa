#include<iostream>
using namespace std;

class Fact {
public:
    int n;

    void calc() {
        int f = 1;
        for(int i = 1; i <= n; i++) f *= i;
        cout << "Factorial: " << f << endl;
    }
};

int main() {
    Fact obj;
    cout << "Enter number: ";
    cin >> obj.n;
    obj.calc();
    return 0;
}
