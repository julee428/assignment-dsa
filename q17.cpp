#include<iostream>
using namespace std;

class Leap {
public:
    int start, end;

    void show() {
        for(int i = start; i <= end; i++) {
            if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                cout << i << endl;
        }
    }
};

int main() {
    Leap obj;

    cout << "Enter start year and end year: ";
    cin >> obj.start >> obj.end;

    obj.show();

    return 0;
}
