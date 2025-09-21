#include<iostream>
using namespace std;

class Grade {
public:
    int score;

    void findGrade() {
        if(score >= 90)
            cout << "A" << endl;
        else if(score >= 80)
            cout << "B" << endl;
        else if(score >= 70)
            cout << "C" << endl;
        else if(score >= 60)
            cout << "D" << endl;
        else
            cout << "F" << endl;
    }
};

int main() {
    Grade obj;

    cout << "Enter score: ";
    cin >> obj.score;

    obj.findGrade();

    return 0;
}
