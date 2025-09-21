#include<iostream>
using namespace std;

class Banana {
public:
    float cp, sp;

    void check() {
        float cp_one = cp / 12;
        float sp_one = sp / 12;
        float total_cp = cp_one * 25;
        float total_sp = sp_one * 25;

        if(total_sp > total_cp)
            cout << "Profit: " << total_sp - total_cp << endl;
        else if(total_sp < total_cp)
            cout << "Loss: " << total_cp - total_sp << endl;
        else
            cout << "No Profit No Loss" << endl;
    }
};

int main() {
    Banana obj;

    cout << "Enter CP per dozen: ";
    cin >> obj.cp;
    cout << "Enter SP per dozen: ";
    cin >> obj.sp;

    obj.check();

    return 0;
}
