// customFunctionLab
// luck is when preparation meets opportunity
#include <iostream>
#include <string>
// declare translate
char translate(int numberGrade);

int main()
{
    int rawTestScore;
    int passingGrade = 60;
    // get numeric grade from user
    std::cout << "What was your test score? ";
    std::cin >> rawTestScore;
    std::string passOrFail = (rawTestScore >= passingGrade) ? "You passed!" : "Oh no. Better luck next time.";
    // call translate function
    // translate(rawTestScore);
    // print letter grade
    std::cout << translate(rawTestScore) << "\n" << passOrFail << "\n";
    system("pause");
    return 0;
}

//define translate
char translate(int numberGrade)
{
    if (numberGrade >= 90){
        return 'A';
    }
    else if (numberGrade >= 80){
        return 'B';
    }
    else if (numberGrade >= 70){
        return 'C';
    }
    else if (numberGrade >= 60){
        return 'D';
    }
    else {
        return 'F';
    }
}