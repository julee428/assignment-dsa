#include<iostream>
using namespace std;

class NextPrime {
public:
    int n;

    void find() {
        int num = n + 1;
        while(true) {
            bool flag = true;
            for(int i = 2; i*i <= num; i++) {
                if(num % i == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "Next prime: " << num << endl;
                break;
            }
            num++;
        }
    }
};

int main() {
    NextPrime obj;
    cout << "Enter number: ";
    cin >> obj.n;
    obj.find();
    return 0;
}
