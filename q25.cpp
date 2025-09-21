#include<iostream>
using namespace std;

class SquareSum {
public:
    int n;

    void sum() {
        int s = 0;
        for(int i = 1; i <= n; i++) s += i*i;
        cout << "Sum: " << s << endl;
    }
};

int main() {
    SquareSum obj;
    cout << "Enter N: ";
    cin >> obj.n;
    obj.sum();
    return 0;
}
