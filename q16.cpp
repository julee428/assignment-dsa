#include<iostream>
using namespace std;

class Temp {
public:
    float val;
    char type;

    void convert() {
        if(type == 'C') {
            float f = (val * 9/5) + 32;
            cout << "Fahrenheit: " << f << endl;
        }
        else if(type == 'F') {
            float c = (val - 32) * 5/9;
            cout << "Celsius: " << c << endl;
        }
        else
            cout << "Invalid type" << endl;
    }
};

int main() {
    Temp obj;

    cout << "Enter temperature: ";
    cin >> obj.val;
    cout << "Enter type (C/F): ";
    cin >> obj.type;

    obj.convert();

    return 0;
}
