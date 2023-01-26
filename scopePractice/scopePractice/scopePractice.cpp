// scopePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void scopeTest();

// public/ global F-- see me after class
int secretNumber = 80;

int main()
{
    // private
    int secretNumber = 68;
    std::cout << "Main: " << secretNumber << std::endl;
    scopeTest(secretNumber);
}

void scopeTest(int secretNumber) {

    // private
    int secretNumber = 80;
    std::cout << "Test: " << secretNumber << std::endl;
}