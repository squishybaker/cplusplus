// Grade Translator
#include <iostream>

using namespace std;

int main()
{
    float user_grade;
    cout << "What was your test score? ";
    cin >> user_grade;
    if (user_grade > 100){
        cout << "Outstanding! A+";
    }
    else if (user_grade >= 90){
        cout << 'A';
    }
    else if (user_grade >= 80){
        cout << 'B';
    }
    else if (user_grade >= 70){
        cout << 'C';
    }
    else if (user_grade >= 60){
        cout << 'D';
    }
    else if (user_grade >= 0) {
        cout << 'F';
    }
    else if (user_grade < 0) {
        cout << "I don't know how thats possible...";
    }
    else {
        return 0;
    }
    // How to throw an error when user gives char or string?
}