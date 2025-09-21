#include<iostream>
using namespace std;

class Age {
public:
    int age;

    void classify() {
        if(age < 13)
            cout << "Child" << endl;
        else if(age < 20)
            cout << "Teenager" << endl;
        else if(age < 60)
            cout << "Adult" << endl;
        else
            cout << "Senior" << endl;
    }
};

int main() {
    Age obj;

    cout << "Enter age: ";
    cin >> obj.age;

    obj.classify();

    return 0;
}
