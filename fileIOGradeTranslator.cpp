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
char translate(/*std::string muppet,*/ int numberGrade);

int main()
{
    //std::string name;
    int rawTestScore;
    std::string filePath = "Z:\\Programming\\cplusplus";
    std::string fileName = "muppetScores.txt";

    std::ofstream outFile;
    outFile.open(filePath + "\\" + fileName, std::ios::app);
    if (outFile.fail()){
        std::cout << "output file failed" << std::endl;
        system("pause");
        exit(1);
    }

    std::ifstream inFile;
    inFile.open(filePath + "\\" + fileName);
    if (inFile.fail()) {
    std::cout << "input file failed" << std::endl;
    system("pause");
    exit(1);
    }

    //call translate on outFile
    //index each column, call translate on column 1
    std::string append;
    std::cout << "Reading from file: \n";
    while (getline(inFile, append)){
        std::cout << append << " " << translate(rawTestScore) << "\n";
        // for (int i = 0; i < 1; i++){
        //     std::cout << append << " ";
        //     for (int j = 1; j < 2; j++) {
        //         std::cout << translate(/*name,*/ rawTestScore) << "\n";
        //     }
        // }
    }


    inFile.close();
    outFile.close();
}

//define translate
char translate(/*std::string muppet,*/ int numberGrade)
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

//define appendToFile
