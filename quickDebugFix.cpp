/*
The following series of IF statements is supposed to follow the standard grading scale of 
90+ = A, 80-89 = B, 70-79 = C, 60-69 = D, and less than 60 = F.  
It is supposed to take a score and convert it to the appropriate letter grade.

Test the program and describe how it does not work.  

Then describe how you would fix this program.
*/

#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Input grade: ";

    cin >> score;

    if (score >= 90)
    {
        cout << "A" << endl;
    }
    else if (score >= 80)
    {
        cout << "B" << endl;
    }
    else if (score >= 70)
    {
        cout << "C" << endl;
    }
    else if (score >= 60)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
    system("pause");
    return 0;
}