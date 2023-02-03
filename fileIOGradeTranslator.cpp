// fileio.cpp : This file contains the 'main' function. Program execution
// 
/*
Read a file of names and numeric scores (muppetScores.txt)
Output to file with letter grade next to name and numeric score
    -Separated by a space
Output should also go to screen for verification
*/


#include <iostream>
#include <fstream>
#include <string>

// declare translate
char translate(int numberGrade);

int main()
{
    std::string studentName;
    int studentGrade;
    
    std::string filePath = "Z:\\Programming\\cplusplus";
    std::string inFileName = "muppetScores.txt";
    std::string outFileName = "muppetScoresUpdated.txt";

    std::ofstream outFile;
    outFile.open(filePath + "\\" + outFileName, std::ios::app);
    if (outFile.fail()){
        std::cout << "output file failed" << std::endl;
        system("pause");
        exit(1);
    }

    std::ifstream inFile;
    inFile.open(filePath + "\\" + inFileName);
    if (inFile.fail()) {
    std::cout << "input file failed" << std::endl;
    system("pause");
    exit(1);
    }
    
    while (inFile >> studentName >> studentGrade){
        std::cout << studentName << " " << studentGrade
        << " " << translate(studentGrade) << "\n";
        
        
        outFile << studentName << " " << studentGrade 
        << " " << translate(studentGrade) << "\n";
    
    }

    inFile.close();
    outFile.close();
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