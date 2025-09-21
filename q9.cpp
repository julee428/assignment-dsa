#include<iostream>
using namespace std;

class Date {
public:
    int d, m, y;

    void show() {
        cout << "Day - " << d << ", Month - " << m << ", Year - " << y << endl;
    }
};

int main() {
    Date obj;

    char slash;
    cout << "Enter date (DD/MM/YYYY): ";
    cin >> obj.d >> slash >> obj.m >> slash >> obj.y;

    obj.show();

    return 0;
}
