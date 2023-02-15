#include <iostream>
#include <fstream>
#include <string>

int main(){
    int count;
    int total;
    int sum = 0;
    int average;

    std::string filePath = "Z:\\Programming\\cplusplus";
    std::string inFileName = "numberReport.txt";

    std::ifstream inFile;
    inFile.open(filePath + "\\" + inFileName);
    if (inFile.fail()) {
    std::cout << "input file failed" << std::endl;
    system("pause");
    exit(1);
    }

    while (inFile >> total){
        sum += total;
        count++;
    } 
    std::cout << "The total sum of the numbers is " << sum << ".\n";
    std::cout << "There are " << count << " numbers.\n";
    average = sum / count;
    std::cout << "The average of the numbers is " << average << ".\n";
    return 0;
}