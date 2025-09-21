#include<iostream>
using namespace std;

class CubeSum {
public:
    int n;

    void sum() {
        int s = 0;
        for(int i = 1; i <= n; i++) s += i*i*i;
        cout << "Sum: " << s << endl;
    }
};

int main() {
    CubeSum obj;
    cout << "Enter N: ";
    cin >> obj.n;
    obj.sum();
    return 0;
}
