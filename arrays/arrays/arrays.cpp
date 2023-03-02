// Score Statistics

/*
-User input x number of test scores
-Store input in an array
-Loop over array
    -Output:
        -Max
        -Min
        -Average
-Extra street cred:
    -Add names
    -Produce output that says who was closest to average
*/

#include <iostream>
#include <string>
#include <cstdlib>

double average(int a[], int b);

int main() {
    // std::string student;
    int i = 0;
    int testScores;

    std::cout << "How many students and test scores? " << "\n";
    std::cin >> testScores;
    int* arr = new int(i);
    int temp;

    std::cout << "Enter the scores:" << std::endl;
    for (i = 0; i < testScores; i++) {
        std::cin >> temp;
        arr[i] = temp;
    }
    for (i = 0; i < testScores; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nThe average test score was " << average(arr, testScores) << "\n";

    int highestGrade;
    int lowestGrade;
    highestGrade = arr[0];
    lowestGrade = arr[0];
    for (int i = 0; i < testScores; i++) {
        if (highestGrade < arr[i]) {
            highestGrade = arr[i];
        }
        else if (lowestGrade > arr[i]) {
            lowestGrade = arr[i];
        }
    }

    std::cout << "The highest grade was: " << highestGrade << std::endl;
    std::cout << "The lowest grade was: " << lowestGrade << std::endl;

    //delete[] arr;
    return 0;
}

double average(int a[], int b) {
    int sum = 0;
    for (int j = 0; j < b; j++)
        sum += a[j];

    return (float)sum / b;
}