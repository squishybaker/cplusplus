// pbr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int callByValue(int n);
// pointer to an integer
void callByReference(int& n);

int main()
{
    int userNumber;
    std::cout << "Give me a number:\n";
    std::cin >> userNumber;

    // userNumber = callByValue(userNumber);
    callByReference(userNumber);

    std::cout << userNumber << std::endl;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

void callByReference(int& n) {
    n = n + 1;
}


int callByValue(int n) {
    return n + 1;
}

