#include<iostream>
using namespace std;

class Week {
public:
    int d;

    void show() {
        if(d == 1) cout << "Monday" << endl;
        else if(d == 2) cout << "Tuesday" << endl;
        else if(d == 3) cout << "Wednesday" << endl;
        else if(d == 4) cout << "Thursday" << endl;
        else if(d == 5) cout << "Friday" << endl;
        else if(d == 6) cout << "Saturday" << endl;
        else if(d == 7) cout << "Sunday" << endl;
        else cout << "Invalid" << endl;
    }
};

int main() {
    Week obj;

    cout << "Enter number (1-7): ";
    cin >> obj.d;

    obj.show();

    return 0;
}
