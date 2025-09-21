#include<iostream>
using namespace std;

class EvenSum {
public:
    int n;

    void sum() {
        int s = 0;
        for(int i = 1; i <= n; i++) s += 2*i;
        cout << "Sum: " << s << endl;
    }
};

int main() {
    EvenSum obj;
    cout << "Enter N: ";
    cin >> obj.n;
    obj.sum();
    return 0;
}
