// bubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
>>create file path
>>create file name
>>input number file to program
read/ sort that file
output to new file
*/

#include <iostream>
#include <fstream>
#include <string>

void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

void swap(int& n1, int& n2);


int main()
{
    int number;
    int prevNum = 5, currNum = 9;
    swap(prevNum, currNum);
    
    
    //open input file
    std::string filePath = "C:\\Users\\garrett.solomon.BELTEC\\Desktop\\files";
    std::string inFileName = "bubbleNumbers.txt";

    //open output file
    //std::string filePath = "C:\\Users\\garrett.solomon.BELTEC\\Desktop\\files";
    std::string outFileName = "numbers.txt";

    std::ofstream outFile;
    outFile.open(filePath + "\\" + outFileName, std::ios::app);
    if (outFile.fail()) {
        std::cout << "output file failed" << std::endl;
        system("pause");
        exit(1);
    }
    std::ifstream inFile;
    inFile.open(filePath + "\\" + inFileName);
    if (inFile.fail()) {
        std::cout << "output file failed" << std::endl;
        system("pause");
        exit(1);
    }

    // Read number from input file
    bool sorted = true;
    do {

        sorted = true;
        inFile >> prevNum;
        while (inFile >> currNum) {
            std::cout << prevNum << " " << currNum << std::endl;
            if (prevNum > currNum) {
                swap(prevNum, currNum);
                sorted = false;
            }
            prevNum = currNum;
        }
        std::cout << prevNum << " " << currNum << std::endl;
    } while (!sorted);
    
    inFile.close();
    outFile.close();

}

// function definitions
void swap(int& prevNum, int& currNum) {
    int temp = prevNum;
    prevNum = currNum;
    currNum = temp;
}



// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}