// Grade Translator
#include <iostream>

using namespace std;

int main()
{
    double user_grade;
    cout << "What was your test score? ";
    cin >> user_grade;
    if ((user_grade < 60) && (user_grade >= 0))
    cout << 'F';
    if ((user_grade < 70) && (user_grade >= 60))
    cout << 'D';
    if ((user_grade < 80) && (user_grade >= 70))
    cout << 'C';
    if ((user_grade < 90) && (user_grade >= 80))
    cout << 'B';
    if ((user_grade <= 100) && (user_grade >= 90))
    cout << 'A';
    if (user_grade > 100)
    cout << "Outstanding! A+";
    if (user_grade < 0)
    cout << "I don't know how thats possible...";
    else
    return 0;
    // How to throw an error when user gives char or string?
}