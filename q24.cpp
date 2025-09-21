#include<iostream>
using namespace std;

class OddSum {
public:
    int n;

    void sum() {
        int s = 0;
        for(int i = 1; i <= n; i++) s += 2*i - 1;
        cout << "Sum: " << s << endl;
    }
};

int main() {
    OddSum obj;
    cout << "Enter N: ";
    cin >> obj.n;
    obj.sum();
    return 0;
}
