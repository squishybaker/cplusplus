// Grade Translator
#include <iostream>

using namespace std;

int main()
{
    double userGrade;
    cout << "What was your test score? ";
    cin >> userGrade;
    if ((userGrade < 60) && (userGrade >= 0))
        cout << 'F';
    if ((userGrade < 70) && (userGrade >= 60))
        cout << 'D';
    if ((userGrade < 80) && (userGrade >= 70))
        cout << 'C';
    if ((userGrade < 90) && (userGrade >= 80))
        cout << 'B';
    if ((userGrade <= 100) && (userGrade >= 90))
        cout << 'A';
    if (userGrade > 100)
        cout << "Outstanding! A+";
    if (userGrade < 0)
        cout << "I don't know how thats possible...";
    else
        return 0;
    // How to throw an error when user gives char or string?
}
    //else if would work to make the cases less wordy
    //ex. instead of: if ((user_grade < 60) && (user_grade >= 0))
    //use: else if (user_grade < 60)
    //  cout << F
