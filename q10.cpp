#include<iostream>
using namespace std;

class Time {
public:
    int h, m;

    void show() {
        cout << "Hour - " << h << ", Minute - " << m << endl;
    }
};

int main() {
    Time obj;

    char colon;
    cout << "Enter time (HH:MM): ";
    cin >> obj.h >> colon >> obj.m;

    obj.show();

    return 0;
}
