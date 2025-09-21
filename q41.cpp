#include<iostream>
using namespace std;

class Armstrong1000 {
public:
    void print() {
        for(int i = 1; i < 1000; i++) {
            int temp = i, sum = 0;
            while(temp > 0) {
                int d = temp % 10;
                sum += d*d*d;
                temp /= 10;
            }
            if(sum == i) cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    Armstrong1000 obj;
    obj.print();
    return 0;
}
